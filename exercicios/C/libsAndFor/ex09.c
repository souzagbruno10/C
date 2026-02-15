#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int number, count;

	srand(time(NULL));

	for(int i = 1; i <= 6; i++)
	{
	count = 0 + i;
	number = rand() % 60 + 1;
	printf("%d - Número da Mega-Sena: %d\n",count, number);

}

	return 0;
}
