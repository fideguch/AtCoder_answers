def _check_(A, B, array):
	result = 0
	for arr in array:
		content = list(str(arr))
		tmp = sum(map(int, content))
		if tmp >= A and tmp <= B:
			result += arr
		else:
			continue
	return result

N, A, B = list(map(int, input().split()))
array = list((int(x) for x in range (1, N + 1)))

result = _check_(A, B, array)
print(result)