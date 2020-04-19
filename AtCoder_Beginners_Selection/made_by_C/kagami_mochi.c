#include <stdio.h>

int		mochi_check(int n, int *mochi);

int		main(void)
{
	int		n;

	scanf ("%d", &n);

	int		mochi[n];
	int		i;

	for (i = 0; i < n; i++)
		scanf("%d", &mochi[i]);
	printf("%d",mochi_check(n, mochi));
	return 0;
}

int		mochi_check(int n, int *mochi)
{
	int		i, a, kagami, check;

	kagami = 1;
	for (i = 0; i < n; i++)
	{
		check = 0;
		for (a = i; a > 0; a--)
		{
			if (mochi[i] == mochi[a - 1])
				check++;
			if (a - 1 == 0 && check == 0)
				kagami++;
		}
	}
	return (kagami);
}