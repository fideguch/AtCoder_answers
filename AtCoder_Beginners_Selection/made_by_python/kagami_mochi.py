def check_mochi(array):
	array = set(array)
	mochi = len(array)
	return mochi

N = int(input())
array = []
for _ in range(N):
	array.append(int(input()))

print(check_mochi(array))