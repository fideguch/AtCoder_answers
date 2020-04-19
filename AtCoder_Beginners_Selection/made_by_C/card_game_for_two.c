#include <stdio.h>

int		alice_mina_bob(int cards, int *card);

int		main(void)
{
	int		cards;
	int		i;

	scanf("%d", &cards);

	int		card[cards - 1];

	for (i = 0; i < cards; i++)
	{
		scanf("%d", &card[i]);
	}
	printf("%d",alice_mina_bob(cards, card));

	return 0;
}

int		alice_mina_bob(int cards,int *card)
{
	int		i;
	int		l;
	// int		test;
	int		tmp;
	int		alice;
	int		bob;
	int		result;

	for (i = 0; i < cards - 1 ; i++)
	{
		for (l = 0; l < cards - 1; l++)
		{
			if (card[l] > card[l + 1])
			{
				tmp = card[l];
				card[l] = card[l + 1];
				card[l + 1] = tmp;
			}
		}
		// printf("%d回目の入れ替え\n", i + 1);
		// for (test = 0; test < cards; test++)
		// {
		// 	printf("%d ", card[test]);
		// }
		// printf("\n");
	}
	alice = 0;
	bob = 0;
	for (i = 0; i < cards; i++)
	{
		if (i % 2 == 0)
			alice += card[i];
		else
			bob += card[i];
	}
	// printf("alice's points :%d\n", alice);
	// printf("bob's points :%d\n", bob);
	if (alice - bob < 0)
		result = -(alice - bob);
	else
		result = alice - bob;
	return (result);
}