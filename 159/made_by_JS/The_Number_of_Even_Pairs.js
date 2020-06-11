const fact = (n) => {
	return n == 0 ? 1 : n * fact(n - 1);
}

const mainFunc = (input) => {
	const array = input.split(' ');
	const N = parseInt(array[0], 10);
	const M = parseInt(array[1], 10);
	if (N == 1 && M == 1) {
		console.log(0);
		return 0;
	}
	const n_conbination = fact(N) / (fact(2) * fact(N - 2));
	const m_convination = fact(M) / (fact(2) * fact(M - 2));
 	console.log(n_conbination + m_convination);
}

mainFunc(require('fs').readFileSync('/dev/stdin', 'utf8'));
