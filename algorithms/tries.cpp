//need to work on this
#include<bits/stdc++.h>
using namespace std;

struct node{
    node* children[26];
    bool is_end;
    node(){
        memset(children, 0, sizeof(children));
        is_end=false;
    }
};

void insert(node* nd, char* s){
    if(*s){
        if(!nd->children[*s-'a'])
            nd->children[*s-'a']=new node();
        insert(nd->children[*s-'a'],s+1);
    }
    else
        nd->is_end=true;
}

bool contains(node* nd, char *s){
    if(*s){
        if(!nd->children[*s-'a'])
            return false;
        return contains(nd->children[*s-'a'],s+1);
    }
    else
        return nd->is_end;
}

int main(){
    node *trie=new node();
    insert(trie, "lololz");
    if(contains(trie,"olz")) printf("present");
    else printf("not present");
    return 0;
}
