#include <stdio.h>
#include <math.h>

int rad(int x, int y)
{
	
    printf("\nO resultado da potenciacao é : %.0f", pow (x,y));

    return 0;
}

int main (void)
{
	int x, y;

	printf("\nDigite a base: ");
	scanf("%d", &x);
	printf("\nDigite a potencia: ");
	scanf("%d", &y);
	printf("\n-------------------------------------------");
	rad(x, y);
	printf("\n-------------------------------------------\n");

	return 0;
}
