#include <stdio.h>

int	put_number(int num){
	int	total;
	
	total = 0;
	if (num < 10)
		return (num);
	while (num >= 10){
		if (num >= 10){
			total += num % 10;
		}
		num /= 10;
	}
	total += num;
	return (total);
}

int	sum_numbers(int n, int a, int b){
	int	i, sum_result, total;

	total = 0;
	for (i = 1; i <= n; i++){
		sum_result = put_number(i);
		if (sum_result >= a && sum_result <= b){
			total += i;
		}
	}
	return (total);
}

int	main(void){
	int	n, a, b, answer;
	
	scanf("%d", &n);
	scanf("%d", &a);
	scanf("%d", &b);
	answer = sum_numbers(n, a, b);
	printf("%d", answer);
	return 0;
}
