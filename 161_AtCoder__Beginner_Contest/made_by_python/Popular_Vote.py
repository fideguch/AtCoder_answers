def pickup(vote, choice):
	flag = 0
	sum_vote = 0
	for i in vote:
		sum_vote = sum_vote + i
	for i in vote:
		if i >= sum_vote / (choice * 4):
			continue
		else:
			flag = flag + 1
	if  choice <= int(len(vote)) - flag:
		return 0
	else:
		return 1

numbers, choice = list(map(int, input().split()))

vote = [numbers - 1]
vote = list(map(int, input().split()))

if pickup(vote, choice) == 0:
	print("Yes")
else:
	print("No")
