a,b,c = map(int,input().split())
max = 0

if(a==b and a==c and b==c):
    print(10000+(a*1000))

elif(a==b or a==c):
    print(1000 + (a*100))
elif(b==c):
    print(1000+(b*100))
else:
    if(a>b and a>c):
        max=a
    elif(b>a and b>c):
        max=b
    else:
        max = c
    print(max*100)