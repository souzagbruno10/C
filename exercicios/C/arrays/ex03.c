#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
	int megaSena[6];
	int fezinha[6] = {3, 27, 10, 33, 59, 42};
	int acertos = 0;

	srand(time(NULL));

	printf("\n========== MEGA SENA DO C ===========\n");

	for (int i = 0; i < 6; i++)
	{
		megaSena[i] = rand() % 60 + 1;
		printf("%d ", megaSena[i]);
	}
	printf("\n========= FEZINHA ===========\n");

	for (int i = 0; i < 6; i++)
	{
		printf("%d ", fezinha[i]);
	}

	printf("\n=========== RESULTADOS ==========\n");

	for (int i = 0; i < 6; i++)//compara fezinha 
	{
		for (int j = 0; j < 6; j++)//com a megaSena
		{
			if (megaSena[j] == fezinha[i])
			{
			printf("\nAcertou o número %d", fezinha[i]);
			acertos++;;

			}
		
		}
	
	}
	  printf("\n-----------------------------------------------");	
	  printf("\nTotal de acertos: %d ", acertos);



	return 0;
}
