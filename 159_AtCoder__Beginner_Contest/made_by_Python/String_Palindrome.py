def judge_str(str1, str2):
	print("str1 :{},str2 :{}".format(str1, str2))
	if str1 == str2:
		return 1
	else:
		return 0

S = list(map(str, input()))
print(S)
N = len(S)
print(N)
if not judge_str(S[:], S[::-1]):
	print("No")
else:
	print("Yes")
