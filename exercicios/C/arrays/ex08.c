#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void user (int fezinha[5])
{	
	printf("\n==== FEZINHA C ====");

	for (int i = 0; i < 5; i++)
	{
	int count = i + 1;
	printf("\nDigite o %d número da sorte: ", count);
	scanf("%d", &fezinha[i]);	
	}
	printf("\n---------------------------------------");
	printf("\nSeu Jogo: ");

	for (int i = 0; i < 5; i++)
	{
	printf("[%d] ", fezinha[i]);
	}
	printf("\n");
}

void sys (int system[5])
{
	srand(time(NULL));

	printf("\n==== APOSTA C ====");
	printf("\nNúmeros sorteados: ");

	for (int i = 0; i < 5; i++)
	{
		system[i] = rand() % 50 + 1;
		printf("[%d] ", system[i]);
	}
	printf("\n");
}

void result (int fezinha[5],int system[5])
{
	int acertos = 0;

	printf("\n==== RESULTADO C ====\n");
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (system[j] == fezinha[i])
			{
			printf("[%d] ", fezinha[i]);
			acertos++;
			}
		}	
	}
	printf("\n-----------------------------------");
        printf("\nTotal de acertos : %d ", acertos);
}
int main (void)
{
	srand(time(NULL));

	int fez[5], aposta[5];

	user(fez);
	sys(aposta);
	result(fez, aposta);

	return 0;
}
