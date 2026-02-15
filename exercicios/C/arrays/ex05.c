#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fezinha(int n[10])
{

	printf("\n==== FAÇA SUA APOSTA ====\n");
 
	for (int i = 0; i < 10; i++)
	{
		  int count = i + 1;

		  printf("\nDigite seus números da sorte - [%d] : ", count);
 	       	  scanf("%d", &n[i]);
	}
	printf("\n-------------------------------------------------");
	printf("\nSeu jogo: ");
	for (int i = 0; i < 10; i++)
	{
		printf("[%d] - ", n[i]);
	}
	printf("\n");
}

void lotofacil(int lotofacil[10])
{

	srand(time(NULL));

	printf("\n==== LOTOFACIL C ====\n");

	for (int i = 0; i < 10; i++)
	{
		lotofacil[i] = rand() % 100 + 1;
		printf("%d ", lotofacil[i]);
	}
}

void resultado(int lotofacil[10], int fezinha[10])
{
	int acertos = 0;

	printf("\n==== RESULTADO ====\n");

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (lotofacil[j] == fezinha[i])
			{
				printf("%d ", fezinha[i]);
				acertos++;
			}	
		}
	}
	printf("\nTotal de acertos: %d", acertos);
}

int main (void)
{
	int fez[10], loto[10];

	srand(time(NULL));

	fezinha(fez);
	lotofacil(loto);
	resultado(fez, loto);

	return 0;
}

