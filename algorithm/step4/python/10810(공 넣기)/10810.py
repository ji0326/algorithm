n,m = map(int, input().split())

arr = [0]*n

for i in range(m):
    a,b,c = map(int, input().split())

    for k in range(a,b+1):
        arr[k-1] = c


for i in range(n):
    print(arr[i], end=" ")
