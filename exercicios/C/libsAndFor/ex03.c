#include <stdio.h>

int main ()
{
	int n;
	char charac;

	printf("\nDigite o tamanho do quadrado: ");
	scanf("%d", &n);
	printf("\nDigite o caractere:  ");
	scanf(" %c", &charac);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf(" %c ", charac);
			
		}
		 printf("\n");
	}

	return 0;
}
