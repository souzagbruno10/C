#include <stdio.h>

float velocity(float kms[4])
{
	int total = 0;

	printf("\n==== VELOCITY ====");

	for (int i = 0; i < 4; i++)
	{
		int count = i + 1;
		printf("\nDigite a %d velocidade: ", count);
		scanf("%f", &kms[i]);
		total += kms[i];
	}
	return total;
}

void result (float total)
{
	float media = total / 4;

	printf("\n-------------------------------------------");
	printf("\nA velocidade média é %.2f", media);

}

int main (void)
{
	float kms[4];
	float totalKms = velocity(kms);
	result(totalKms);

	return 0;
}
