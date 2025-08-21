#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char age[] = "";

	printf("\nDigite sua idade: ");
	scanf("%s", age);//recebo a idade como string

	int transformation = atoi(age); // transformo ela em inteiro

	printf("\n---------------------------");
	printf("\nSua idade é de %d anos", transformation);

	if (transformation >= 18)
	{
		printf("\nMaior de idade!");
	}
	else
	{
		printf("\nMenor de idade!");
	}

	return 0;
}
