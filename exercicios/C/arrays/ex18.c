#include <stdio.h>

void record (int score [5])
{
	int mundialRecord = 5000;

	printf("\n==== RECORDE MUNDIAL EM C ====\n");
	printf("\nDigite os 5 scores do jogador:\n");

	for (int i = 0; i < 5; i++)
	{
		int count = i + 1;

		printf("\nScore %d :", count);	
		scanf("%d", &score[i]);

		if (score[i] < mundialRecord)
		{	
			printf("\n------------------------------------------------------------------------------------");
			printf("\nMenor pontuação em relação ao novo recorde mundial --> %d pontos. ", mundialRecord);
			printf("\n------------------------------------------------------------------------------------");
		}
		else if (score[i] > mundialRecord)
		{
			mundialRecord = score[i];
			printf("\n------------------------------------------------------------------------------------");
			printf("\nParabéns, superou o recorde mundial com --> %d pontos. ", mundialRecord);
			printf("\n------------------------------------------------------------------------------------");
		}
		else if (score[i] ==  mundialRecord)
		{	
			printf("\n------------------------------------------------------------------------------------");
			printf("\nPontuação igual ao recorde mundial!");
			printf("\n------------------------------------------------------------------------------------");	
		}
	}
	
}

int main (void)
{
	int score [5];

	record(score);

	return 0;
}

