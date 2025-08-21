#include <stdio.h>


float frames (float fps[6])
{
	int total = 0;

	printf("\n==== FPS POR JOGO ====");
	
	printf("\n<Digite os FPS registrados em 6 momentos>\n ");

	for (int i = 0; i < 6; i++)
	{
		int count = i + 1;
		printf("\nMomento %d : ", count);
		scanf("%f", &fps[i]);
		total += fps[i];
		
	}
	return total;
	
}

void result (float total)
{
	float media = total / 6;
	printf("\n-------------------------------------------");
	printf("\nA média de FPS é de %.2f\n", media);
}


int main (void)
{
	float fps[6];

	float totalFps = frames(fps);
	result(totalFps);
	
	return 0;
}
