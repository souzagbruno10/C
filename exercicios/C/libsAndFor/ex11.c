#include <stdio.h>
#include <stdlib.h>

void temperature(float transformation)
{
	if (transformation < 18.0)
	{
		printf("\nEstá frio!");
	}
	else if (transformation >= 18.0 && transformation <= 26.0)
	{
		printf("\nEstá Agradável!");
	}
	else
	{
		printf("\nEstá quente!");
	}	

}

int main ()
{
	char temp[]= "";

	printf("\nDigite a temperatura do ambiente: ");
	scanf("%s", temp);

	float transformation = atof(temp);

	printf("\nTemperatura ambiente de %.1f graus celsius.", transformation);

	temperature(transformation);	

	return 0;
}

