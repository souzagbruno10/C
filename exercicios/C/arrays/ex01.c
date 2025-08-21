#include <stdio.h>

int main (void)
{
	
	char order[3][20];

	for (int i = 0; i < 3; i++)
	{
		printf("Digite a %d comida: ", i + 1);
		scanf("%s", order[i]);

	}
	printf("\n------------------------------------");

	for (int i = 0; i < 3; i++ )
	{
	
		printf("\nPedido %d : %s.", i + 1, order[i]);
	}

	return 0;
}
