#include <stdio.h>
#include <math.h>

void rSquare (int n)
{

	printf("\n------------------------------------------");
 	printf("\nRaiz quadrada de %d é : %.0f ", n, sqrt(n));

	


}

int main (void)
{
	int n;

	printf("\nDigite o número para ver  a raiz quadrada: ");
	scanf("%d", &n);
	
	rSquare(n);

	return 0;
}
