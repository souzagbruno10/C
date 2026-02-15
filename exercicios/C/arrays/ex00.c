#include <stdio.h>

int main (void)
{
	int gradeStudents[5] = {10, 2, 3, 8, 9};

	for(int i = 0; i < 5; i++)
	{
	printf("\nNota do aluno : %d", gradeStudents[i]);// vai mostrar todas as notas do array;
	}
	printf("\n------------------------------------------------------------------------------");
	
	char favouriteArtists[5][37] = {"Attaque77", "IceCube", "Blink182", "JhonnyCash", "NWA"};
	//o primeiro array sao meus dados armazenados e o segundo o tamanho da memoria para os carateres;	
	for(int i = 0; i < 5; i++)
	{
	printf("\nMeus artistas musicais favoritos: %s", favouriteArtists[i]);
	}


	return 0;
}
