#include <stdio.h>

void matriceId(int n)
{
	int one = 1;
	int zero = 0;

	for (int i = 0; i < n; i++ )
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				printf("%d ", one);
			}
			else
			{
				printf("%d ", zero);
			}
		}printf("\n");

	}
	
}


int main (void)
{
	int  n;
	
	printf("Digite o tamanho da matriz: ");
	scanf("%d", &n);

	if (n == 4 )
	{
		printf("\nMatriz Identidade");
		printf("\n--------------------------------------------\n");
	}

	matriceId(n);



	return 0;
}
