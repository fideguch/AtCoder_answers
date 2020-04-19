import math

def even_numbers(n, m):
	r = 2
	n_combination = math.factorial(n) // (math.factorial(r) * math.factorial(n - r))
	m_combination = math.factorial(m) // (math.factorial(r) * math.factorial(m - r))

	return n_combination + m_combination

N, M = list(map(int, input().split()))

if N == 1 and M == 1:
	print(0)
	quit()

print (even_numbers(N, M))
