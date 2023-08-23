a= []

for i in range(10):
    a.append(int(input())%42)

result = 0

for i in range(10):
    count = 0
    for j in range(i+1, 10):
        if a[i] == a[j]:
            count += 1
    
    if count == 0:
        result += 1
print(result)