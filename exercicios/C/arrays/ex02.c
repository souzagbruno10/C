#include <stdio.h>

void countPoints(void)
{
	int points[10], addition = 0;

	 for (int i = 0; i < 10; i++)
        {
                printf("\nDigite o %d ponto: ", i + 1);
                scanf("%d", &points[i]);

                addition += points[i];
        }
	printf("\n----------------------------------------");
        printf("\nTotal de pontos: %d", addition);

}


int main (void)
{
	
	countPoints();

	return 0;
}
