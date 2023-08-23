a,b = map(int, input().split())

num_list = list(map(int, input().split()))

for i in range(a):
    if num_list[i] < b:
        print(num_list[i], end=" ")