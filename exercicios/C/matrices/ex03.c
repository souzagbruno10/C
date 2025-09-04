 #include <stdio.h>

void diagonal(void)
{
	int diagPrincipal[4][4];
	int total = 0;

	printf("==== SOMA DIAGONAL PRINCIPAL ====");

	for(int i = 0; i < 4; i++)
	{
		printf("\n%d linha" , i + 1);

		for (int j = 0; j < 4; j++)
		{
			printf("\nDigite o número da %d coluna: ", j + 1);
			scanf("%d", &diagPrincipal[i][j]);
			//indices iguais formam a diagonal;
			if (i == j)// aqui a condicao compara se os indices da matriz sao iguais tipo --> 0[i] == 0[j], 1[i] == 1[j] ...
			{
			total += diagPrincipal[i][j];
			}
			
		}
		printf("\n-------------------------------------------------");
	}
	 
                printf("\nSoma diagonal da matriz: %d", total);
}

int main (void)
{

	diagonal();


	return 0;
}

