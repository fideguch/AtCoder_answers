def fact(n)
	return (1..n).to_a.inject(1){|f, i| f * i}
end

def even_conbinations(n, m)
	r = 2
	n_conbinations = fact(n) / (fact(n - r) * fact(r))
	m_conbinations = fact(m) / (fact(m - r) * fact(r))
	return n_conbinations + m_conbinations
end

N, M = gets.split.map &:to_i

if N == 1 && M == 1
	printf("0\n")
end

printf("%d\n", even_conbinations(N, M))
