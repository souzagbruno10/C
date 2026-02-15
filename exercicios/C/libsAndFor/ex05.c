#include <stdio.h>
#include <string.h>

void concatFunction(char *name, char *surname)
{
	strcat(name, surname);
}



int main ()
{
	char name[] = "Bruno";
	char surname[] = " Gomes";

	concatFunction(name, surname);

	printf("Nome Completo: %s .", name);

	return 0;
}
