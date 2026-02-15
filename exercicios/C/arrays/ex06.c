#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void user(int fezinha[6])
{

	printf("\n==== FEZINHA ====");

	for (int i = 0; i < 6; i++)
	{
	int count = i + 1;
	printf("\nDigite o seu %d numero da sorte: ", count);
	scanf("%d", &fezinha[i]);
	}
	printf("\n-------------------------------------------");
	printf("\nSeu jogo é : ");

	for(int i = 0; i < 6; i++)
	{
		printf("[%d] - ", fezinha[i]);
	}
	printf("\n");

}

void sys(int rifa[6])
{
	srand(time(NULL));

	printf("\n==== RIFA C ====");
	printf("\nOs números sorteados foram: ");

	for (int i = 0; i < 6; i++)
	{	
		rifa[i] = rand() % 60 + 1;
		printf("[%d] ", rifa[i]);
	}
	printf("\n--------------------------------------------");
}

void result(int fezinha[6], int rifa[6])
{
	int acertos = 0;

	printf("\n==== RESULTADO ====");
	printf("\nAcertou o número: ");

	for (int i = 0; i < 6; i++)//fezinha
	{
		for (int j = 0; j < 6; j++)//rifa
		{
			if (rifa[j] == fezinha[i])
			{
				printf("%d ", fezinha[i]);
				acertos++;
			}
		}
	}
	printf("\nTotal de acertos: %d ", acertos);
}

int main (void)
{
	int fez[6], rifa[6];

	srand(time(NULL));

	user(fez);
	sys(rifa);	
	result(fez, rifa);

	return 0;
}
