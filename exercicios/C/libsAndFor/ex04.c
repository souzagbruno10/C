#include <stdio.h>

int main ()
{
	int n, formula;

	printf("\nDigite o tamanho do triangulo: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		formula = (n - i);

		for (int spaces = 1; spaces <= formula; spaces++)
		{
			printf(" ");
		}

			for (int j = 1; j <= (2 * i - 1); j++)
			{
				printf("$");
			}
		     printf("\n");
	
	
	}

	return 0;
}
