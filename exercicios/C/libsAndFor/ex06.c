#include <stdio.h>
#include <string.h>


int main ()
{
	char word[20];

	printf("\nDigite uma palavra qualquer para saber o tamanho dela: ");
	scanf("%s", word);

	printf("\n Tamanho de %s é : %lu", word, strlen(word));

	return 0;
}

