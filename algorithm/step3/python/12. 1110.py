input = int(input())
count = 0
result = input

while True:
    a = (input//10) + (input%10)
    input = (input%10)*10+(a%10)
    count = count+1
    if result == input:
        break

print(count)