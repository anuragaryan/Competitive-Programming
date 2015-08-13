#include<bits/stdc++.h>
using namespace std;

struct segment_tree{
    segment_tree *left, *right;
    int from, to, value;
    segment_tree(int from, int to)
        : from(from), to(to), left(NULL), right(NULL), value(0){  }
};

segment_tree* build(const vector<int>&arr, int l, int r){
    if(l>r) return NULL;
    segment_tree *res = new segment_tree(l,r);
    if(l==r)
        res->value=arr[l];
    else{
        int m=(l+r)/2;
        res->left=build(arr,l,m);
        res->right=build(arr,m+1,r);
        if(res->left!=NULL)
            res->value += res->left->value;
        if(res->right!=NULL)
            res->value += res->right->value;
    }
    return res;
}

int query(segment_tree *tree, int l, int r){
    if(tree==NULL) return 0;
    if(l <= tree->from && tree->to <= r)
        return tree->value;
    if(tree->to < l) return 0;
    if(r < tree->from) return 0;
    return query(tree->left,l,r)+query(tree->right,l,r);
}

int update(segment_tree *tree, int i, int val){
    if(tree==NULL) return 0;
    if(tree->to <i) return tree->value;
    if(i< tree->from) return tree->value;
    if(tree->from == tree->to && tree->from == i)
        tree->value=val;
    else
        tree->value = update(tree->left, i ,val) + update(tree->right, i ,val);
    return tree->value;
}

int main() {
  vector<int>arr { 8, 7, 3, 9, 5, 1, 10 };                   // the original array
  segment_tree *tree=build(arr,0,6);

  printf("              idx    0, 1, 2, 3, 4, 5  , 6\n");
  printf("              A is { 8, 7, 3, 9, 5, 1  , 10 }\n");
  printf("RMQ(1, 3) = %d\n", query(tree, 1, 3));          // answer is index 2
  printf("RMQ(4, 6) = %d\n", query(tree, 4, 6));          // answer is index 5
  printf("RMQ(3, 4) = %d\n", query(tree, 3, 4)); // 4
  printf("RMQ(0, 0) = %d\n", query(tree, 0, 0)); // 0
  printf("RMQ(0, 1) = %d\n", query(tree, 0, 1)); // 1
  printf("RMQ(0, 6) = %d\n", query(tree, 0, 6)); // 5

  printf("              idx    0, 1, 2, 3, 4, 5  , 6\n");
  printf("Now, modify A into { 8, 7, 3, 9, 5, 100, 10 }\n");
  update(tree, 5, 100); // update A[5] from 1 to 100
  printf("These values do not change\n");
  printf("RMQ(1, 3) = %d\n", query(tree, 1, 3)); // 2
  printf("RMQ(3, 4) = %d\n", query(tree, 3, 4)); // 4
  printf("RMQ(0, 0) = %d\n", query(tree, 0, 0)); // 0
  printf("RMQ(0, 1) = %d\n", query(tree, 0, 1)); // 1
  printf("These values change\n");
  printf("RMQ(0, 6) = %d\n", query(tree, 0, 6)); // 5->2
  printf("RMQ(4, 6) = %d\n", query(tree, 4, 6)); // 5->4
  printf("RMQ(4, 5) = %d\n", query(tree, 4, 5)); // 5->4
} // return 0;
