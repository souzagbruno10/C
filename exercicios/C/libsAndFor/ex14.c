#include <stdio.h>
#include <string.h>

int main ()
{
	char name[50];
	int qtdA = 0;

	printf("\nDigite seu nome: ");
	scanf("%s", name);

	printf("\n--------------------------------------------------------------------------------");
	printf("\nSeu nome é %s , e o tamanho do seu nome é de %lu letras !!", name, strlen(name));

	for (int i = 0; i < strlen(name); i++)
	{
		if(name[i] == 'A' || name[i] == 'a')
		{
			qtdA++;
		}
	}
		if(qtdA > 0)
		{
			printf("\nO nome %s tem %d letras [a] no nome!", name, qtdA);
		}
		else
		{
			printf("\n O nome %s não tem letras [a] no nome!", name);
		}

	return 0;
}
