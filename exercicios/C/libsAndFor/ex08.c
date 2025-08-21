#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char value[] = "123";

	int transformation  = atoi(value);

	printf("String vira int %d\n", transformation + 2);

	return 0;
}
