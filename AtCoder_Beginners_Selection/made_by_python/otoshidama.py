def look_for(num, total):
	l ,m, n = 0, 0, 0
	for l in range(num + 1):
		for m in range(num + 1):
			if l * 10000 + (num - l - n) * 5000 + n * 1000 < total or l * 10000 + m * 5000 + n * 1000 > total:
				break
			for n in range(num + 1):
				# print("10000万円: {}枚, 5000円: {}枚, 1000円: {}枚".format(l, m, n))
				if l * 10000 + m * 5000 + (num - l - m) * 1000 < total or l * 10000 + m * 5000 + n * 1000 > total:
					break
				elif l + m + n == num:
					if l * 10000 + m * 5000 + n * 1000 == total:
						return (l, m, n)
					else:
						continue
				else:
					continue
	return (-1, -1, -1)

number, total_amount = list(map(int, input().split()))

l, m, n = look_for(number, total_amount)
print("{} {} {}".format(l, m, n))