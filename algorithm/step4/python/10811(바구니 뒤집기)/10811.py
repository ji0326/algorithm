n,m = map(int, input().split())
arr = [i for i in range(1,n+1)]
for i in range(m):
    a,b = map(int, input().split())

    tmp = arr[a-1:b]
    tmp.reverse()
    arr[a-1:b] = tmp

for i in range(n):
    print(arr[i], end=" ")