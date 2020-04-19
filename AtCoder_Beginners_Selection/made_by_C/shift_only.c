#include <stdio.h>

int	check_division(int *numbers, int count, int n)
{
	int	i;
	
	for (i = 0; i < n; i++)
	{
		if (numbers[i] % 2 == 0)
			numbers[i] /= 2;
		else
			return(count);
	}
	count++;
	count = check_division(numbers, count, n);
	return(count);
}

int	get_numbers(int n,int count)
{
	int	i;
        int	numbers[n];

        i = 0;
        while (i < n)
        {
                scanf("%d", &numbers[i]);
                i++;
        }
        return(check_division(numbers, count, n));
}

int	main(void)
{
	int	n, count;

	scanf("%d", &n);
	count = 0;
	printf("%d\n", get_numbers(n, count));
	return 0;
}	
