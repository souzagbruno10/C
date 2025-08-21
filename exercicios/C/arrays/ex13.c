#include <stdio.h>

void even (int number[])
{

	printf("\n==== EVEN'S NUMBERS ====");

	for (int i = 0; i < 10; i++)
	{	
		int count = i + 1;
		printf("\nDigite o %d número inteiro:", count);//salva os valores nos indices da array;
		scanf("%d", &number[i]);
		
	}
}

int verifyEven (int number[])
{	
	printf("\n---------------------------------------------------------------------");
	printf("\nNúmeros pares: ");

	for (int i = 0; i < 10; i++)
	{
	if (number[i] % 2 == 0)//passa pelos indices da array verificando se ha numero par;
	{
		printf("[%d]", number[i]);//printa o numero par armazenado no indice da array;
	}
	
	}
	return 0;
}

int main (void)
{
	int number[10];

	even(number);
	verifyEven(number);

	return 0;
}
