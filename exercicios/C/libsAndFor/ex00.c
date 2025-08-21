#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
	srand(time(NULL));
	int number = rand() % 300;
	
	printf("\nNúmero Aleatório: %d ", number);

	return 0;
}
