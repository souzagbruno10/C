#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void user (int fezinha[7])
{
	printf("\n==== FEZINHA ====");
	
	for(int i = 0; i < 7; i++)
	{
		int count = i + 1;
		printf("\nDigite seu %d numero da sorte: ", count);
		scanf("%d", &fezinha[i]);
	}
	printf("\n-----------------------------------------------------");
	printf("\nSeu jogo: ");

	for(int i = 0; i < 7; i++)
	{
		printf("[%d] ", fezinha[i]);
	}
	printf("\n---------------------------------------------------");
	printf("\n");

}

void sys (int jogoBicho[7])
{
	srand(time(NULL));

	printf("==== JOGO DO BICHO C ====");

	for(int i = 0; i < 7; i++)
	{
		jogoBicho[i] = rand() % 70 + 1;
	
	}
	printf("\nNúmeros Sorteados: ");
	
	for(int i = 0; i < 7; i++)
	{
	 printf("[%d] ", jogoBicho[i]);
	}
	printf("\n--------------------------------------------------------");	

}

void res (int fezinha[7], int jogoBicho[7])
{
	int acertos = 0;

	printf("\n==== RESULTADO ====");
	printf("\nResultado: ");

	for(int i = 0; i < 7; i++)//fezinha
	{
		for (int j = 0; j < 7; j++)//jogoBicho
		{
			if (jogoBicho[j] == fezinha[i])
			{
				printf("[%d] ", fezinha[i]);
				acertos++;
			}
		}
	}
	printf("\n-------------------------------------------------------");
	printf("\nTotal de acertos: %d ", acertos);
}

int main (void)
{
	srand(time(NULL));

	int fez[7], jogo[7], resultado;

	user(fez);
	sys(jogo);
	res(fez, jogo);

	return 0;
}
