#include <stdio.h>
#include <stdlib.h>

void function(int lenght, int *array)
{
	array = (int *) malloc(lenght * sizeof(int));

	if (array == NULL)
	{
		printf("Erro : memória insuficiente");
		
	}

	for (int i = 0; i < lenght; i++)
	{
		array[i] = i * 10;
	}

	printf("Vetor dinamico populado:\n ");

	for (int i = 0; i < lenght; i++)
	{
		printf("%d\n", array[i]);
	}
	free(array);
	
}

int main (void)
{
	int lenght;
	int *array;

	printf("Digite o tamanho do vetor:  ");
	scanf("%d", &lenght);

	function(lenght, array);

	return 0;
}
