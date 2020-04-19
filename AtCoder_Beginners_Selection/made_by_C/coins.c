#include <stdio.h>

int	count_each_coins(int a, int b, int c, int x)
{
	int	counter_a = 0;
	int	counter_b;
	int	counter_c;
	int	okane_flag = 0;
	int	okane;

	while (counter_a <= a)
	{
		counter_b = 0;
		while (counter_b <= b)
		{
			counter_c = 0;
			while (counter_c <= c)
			{
				okane = 0;
				okane = counter_a * 500 + counter_b * 100 + counter_c * 50;
				if (okane == x)
					okane_flag++;
				counter_c++;
			}
			counter_b++;
		}
		counter_a++;
	}
	return (okane_flag);
}

int	main(void)
{
	int	a, b, c, x, pairs;
	
	scanf(" %d", &a);
	scanf(" %d", &b);
	scanf(" %d", &c);
	scanf(" %d", &x);
	pairs = count_each_coins(a, b, c, x);
	printf("%d\n", pairs);
	return (0);
}
