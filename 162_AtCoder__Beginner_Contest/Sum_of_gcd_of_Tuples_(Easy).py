import math
from functools import reduce
import itertools

def gcd(*numbers):
	return reduce(math.gcd, *numbers)

limit_num = int(input())
result_list = []
for num in itertools.product(range(1, limit_num + 1), repeat=3):
	result_list.append(gcd(num))

print(sum(result_list))
