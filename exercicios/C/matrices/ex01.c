#include <stdio.h>

void valuesDay(void)
{
	int val[2][3];
	int total = 0;

	for (int i = 0; i < 2; i++)//linha
	{	printf("\n-------------------------");
		printf("\nAgencia %d ", i + 1);
		printf("\n-----------------------");

		for (int j = 0; j < 3; j++)//coluna
		{
			printf("\ndia %d:", j + 1);
			scanf("%d", &val[i][j]);
			total += val[i][j];
		}
	}
	
	printf("\n-----------------------------------");
        printf("\nTotal arrecadado R$: %d", total);
	
}


int main (void)
{
	valuesDay();


	return 0;
}
