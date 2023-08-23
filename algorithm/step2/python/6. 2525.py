h,m=map(int,input().split())
a=int(input())

if(m+a <60):
    b =m+a
    print(h,b)

else:
    hour = (m+a) // 60
    min = (m+a) % 60

    if(hour+h<24):
        print(hour+h,min)
    else:
        print(hour+h-24,min)