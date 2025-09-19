void temp (int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

#include <stdio.h>
int main(void)
{
	int x = 42;
	int y = 24;

	printf("\nAntes: valor de x --> %d e valor de y --> %d", x, y);

	temp(&x, &y);

	printf("\nDepois: valor de x --> %d e valor de y --> %d", x, y);

	return 0;
}
