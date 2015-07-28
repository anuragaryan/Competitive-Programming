a, b, n = map(int, input().split())
fib = {}
fib[1] = a
fib[2] = b
for i in range(3, n+1):
    fib[i] = fib[i-1]*fib[i-1]+fib[i-2]
print(fib[n])
