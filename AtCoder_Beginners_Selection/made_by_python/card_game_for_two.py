def play_game(cards):
	count, alice, bob = 0, 0 ,0
	for card in cards:
		if count % 2 == 0:
			alice += card
		else:
			bob += card
		count += 1
	return alice - bob

N = int(input())
a = list(map(int, input().split()))

a.sort(reverse=True)

result = play_game(a)
print(result)
