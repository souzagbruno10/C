#include <stdio.h> 

void odd (int number[])
{
	printf("\n==== IMPAR C ====");
	
	for (int i = 0; i < 10; i++)
	{
		int count = i + 1;
		printf("\nDigite o %d número: ", count);
		scanf("%d", &number[i]);
	}

}

void verifyOdd (int number [])
{
	printf("\n-------------------------------------------");
	printf("\nNúmeros ímpares:");

	for (int i = 0; i < 10; i++)
	{
		if (number[i] % 2 != 0)//numeros impares nao sao divisiveis por 2, entao sao 1, já que zero é par
		{	
			printf("[%d]", number[i]);
		}
	}
}

int main (void)
{
	int number[10];
	
	odd (number);
	verifyOdd(number);

	return 0;
}
