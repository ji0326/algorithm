import sys

count = int(input())

for i in range(1,count+1):
    x,y = map(int,sys.stdin.readline().split())
    print("Case #{0}: {1}".format(i,x+y))