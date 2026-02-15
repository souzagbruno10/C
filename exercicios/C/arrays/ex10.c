#include <stdio.h>

float km (float kms[5])
{
	int total = 0;

	printf("\n==== CALCULADORA DE VELOCIDADE ====");
	
	for (int i = 0; i < 5; i++)
	{	
		int count = i + 1;
		printf("\nDigite a %d velocidade:\n", count);
		scanf("%f", &kms[i]);
		total += kms[i];
	}
	return total;
}

void result (float total)
{
	float media = total / 5;

	printf("\n-------------------------------------------------");
	printf("\nA velocidade média é : %.2f ", media);
}


int main (void)
{
	float kms[5];

	float totalKms = km(kms);
	result(totalKms);

	return 0;
}
