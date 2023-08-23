c = int(input())
d = int(input())
sum = 0 

for i in range(1,d+1):
    a,b = map(int,input().split())
    sum = sum + (a*b)

if c==sum:
    print("Yes")
else:
    print("No")

