#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void megaSena(int megaSena[6])
{
	srand(time(NULL));

	printf("\n====== MEGASENA EM C =======\n");

	for (int i = 0; i < 6; i++)
	{
		megaSena[i] = rand() % 60 + 1;
		printf("%d ", megaSena[i]);	
	}
}

void fezinha(int n[6])
{

	printf("\n======== FEZINHA ==========\n");

	for (int i = 0; i < 6; i++)
	{
		int count = i + 1;
		printf("\nDigite o %d número: ", count);
		scanf("%d", &n[i]);
	}
	printf("\n-------------------------------------------------");
	printf("\nSeu jogo: ");
	for (int i = 0; i < 6; i++)
	{
		printf("[%d] ", n[i]);
	}
	printf("\n");

}


void resultado(int fezinha[6], int megaSena[6])
{
	int acertos = 0;

	printf("\n======== RESULTADO =========");

	for (int i = 0; i < 6; i++)//fezinha
	{
		for (int j = 0; j < 6; j++)//mega
		{
			if (megaSena[j] == fezinha[i])
			{
				printf("\nAcertou o[s] número[s]: %d", fezinha[i]);
				acertos++;
			}
			
		}
	
	}
	printf("\n--------------------------------------------------------");
	printf("\nTotal de acertos: %d", acertos);
}


int main (void)
{
	int fez[6], mega[6];
	
	srand(time(NULL));

	fezinha(fez);
	megaSena(mega);
	resultado(fez, mega);

	return 0;
}
