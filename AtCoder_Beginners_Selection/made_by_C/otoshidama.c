#include <stdio.h>

int		*check_total(int count, int total, int *result)
{
	int i;

	for (result[0] = 0; result[0] <= count; result[0]++)
	{
		//最小値よりも小さい合計額の処理
		if (count * 1000 > total || count * 10000 < total)
			break;
		for (result[1] = 0; result[1] <= count - result[0]; result[1]++)
		{
			//1万円の現状の枚数を合計枚数から引き、残りの枚数を全て5000円とした時、合計額よりも小さい時はbreakする　＝＝　1万円札を増やす
			if (result[0] * 10000 + (count - result[0] + result[2]) * 5000 < total)
			{
				break;
			}
			for (result[2] = 0; result[2] <= count - result[0] - result[1]; result[2]++)
			{
				if (result[0] * 10000 + result[1] * 5000 + (count - result[0] + result[1]) * 1000 < total)
				{
					break;
				}
				if (result[0] + result[1] + result[2] == count)
				{
					if (result[0] * 10000 + result[1] * 5000 + result[2] * 1000 == total)
					{
						return (result);
					}
				}
			}
		}
	}
	i = 0;
	while (i < 3)
	{
		result[i] = -1;
		i++;
	}
	return (result);
}

int		main(void)
{
	int		N, Y, i;
	int		result[3];

	scanf("%d %d", &N, &Y);
	i = 0;
	while (i < 3)
	{
		result[i] = '\0';
		i++;
	}
	check_total(N ,Y , result);
	printf("%d %d %d", result[0], result[1], result[2]);
	return (0);
}