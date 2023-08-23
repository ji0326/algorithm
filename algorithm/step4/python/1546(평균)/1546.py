a = int(input())

grade = list(map(int, input().split()))

print(sum(grade)*100/a/max(grade))