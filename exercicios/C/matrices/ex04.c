
#include <stdio.h>

void matrice(int matriceTransp[3][2])
{

	printf("\nDigite os 6 valores da matriz 3x2 (linha por linha): ");

        for (int i = 0; i < 3; i++)
        {
                for (int j = 0; j < 2; j++)
                {
                        printf("\nElemento [%d][%d]: ", i, j);
                        scanf("%d", &matriceTransp[i][j]);
                }

        }
        printf("\n-----------------------------------------------------\n");
}

void matrice2(int matriceTransp[3][2])
{

	printf("Matriz Original\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d\t", matriceTransp[i][j]);
		
		}
		printf("\n");
	
	}

}

void matrice3(int matriceTransp[3][2])
{
	int transp[2][3];
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			transp[j][i] = matriceTransp[i][j];
		}
	}
	printf("\n-------------------------------------------------------\n");
	printf("Matriz Transposta\n");

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", transp[i][j]);
		}
		printf("\n");
	}
	
	
}

int main (void)
{
	int matrix[3][2];

	matrice(matrix);
	matrice2(matrix);
	matrice3(matrix);

	return 0;
}
