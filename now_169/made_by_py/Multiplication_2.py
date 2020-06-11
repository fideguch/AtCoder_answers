import sys

N = int(input())
A = list(map(int, input().split()))

if A.count(0) > 0:
	print(0)
	sys.exit()

result = 1
for num in A:
	if result * num > 1000000000000000000:
		print(-1)
		sys.exit()
	else:
		result = result * num
print(result)
