import sys

def main():
	input = lambda: sys.stdin.readline().rstrip()

	N = int(input())
	S = input()

	R = []
	G = []
	B = []

	for i in range(N):
		if S[i] == 'R':
			R.append(i)
		if S[i] == 'G':
			G.append(i)
		if S[i] == 'B':
			B.append(i)

	base = len(R)*len(G)*len(B)

	cnt = 0
	for i in range(N):
		for j in range(i+1, N):
			k = 2*j - i
			if k >= N or S[i] == S[j] or S[j] == S[k] or S[k] == S[i]:
				continue
			cnt += 1
	print(base - cnt)

if __name__ == '__main__':
    main()
