def coin_check(a, b ,c, total):
	count = 0

	for l in range(a + 1):
		for m in range(b + 1):
			for n in range(c + 1):
				if total == 500 * l + 100 * m + 50 * n:
					count += 1
				else:
					continue
	return count

A = int(input())
B = int(input())
C = int(input())
X = int(input())

result = coin_check(A, B, C, X)
print(result)