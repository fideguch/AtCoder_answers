#include <stdio.h>

int	count_one(char first,char second,char third){
	char masu[3];
	int i, flag;

	masu[0] = first;
	masu[1] = second;
	masu[2] = third;
	flag = 0;
	for(i = 0; i <= 2; i++){
		if (masu[i] == '1')
			flag++;
	}
	return(flag);
}

int	main(void){
	char	a, b, c;
	int	result;
	
	scanf("%c%c%c", &a, &b, &c);
	result = count_one(a, b, c);
	printf("%d", result);
	return 0;
}
