def __check(A):
	for i in A:
		if i % 2 == 0:
			continue
		else:
			# print(i,"は2で割れません")
			return 1
	return 0

def do_division(A, count, n):
	if __check(A) == 0:
		for i in range(n):
			# print(count - 1, "回目の処理です。\nprint before:", A[i])
			A[i] = A[i] / 2
			# print("print after:", A[i])
		count += 1
		# print("print1:", A, "countの値: ",count)
		return do_division(A, count, n)
	else:
		# print("print2:", A, count)
		return count

N = int(input())
A = list(map(int, input().split()))
# print("print:", A)

count = 0

result = do_division(A, count, N)

print(result)