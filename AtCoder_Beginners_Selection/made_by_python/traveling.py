N = int(input())

person = [0, 0]

moves = []
for i in range(N):
	moves.append(list(map(int, input().split())))

for move in moves:
	if move[1] + move[2] > move[0] or (move[1] + move[2] + move[0]) % 2 != 0:
		print("No")
		quit()
print("Yes")
