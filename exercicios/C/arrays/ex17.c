#include <stdio.h>
#include <string.h>

void user (char word[3][20], char verification[3][20])
{
	printf("\n==== VERIFICADOR C ====\n");

		for (int i = 0; i < 3; i++)
		{
		printf("\nDigite a palavra da sua preferência: ");
		scanf("%s", word[i]);
		printf("\n----------------------------------------------------");
		strcpy(verification[i], word[i]);
		}
}

void verify (char verification[5][20])
{
	char letter;

	printf("\nDigite o caractere que você deseja visualizar: ");
	scanf(" %c", &letter);

	for (int i = 0; i < 3; i++)
	{	

		if (strchr(verification[i],letter))
		{
			printf("\nAs palavras com o caractere [%c] são --->  [%s] ", letter, verification[i]);
						
		}
	}
	
	printf("\n-------------------------------------------------------------------------------");
}


int main (void)
{
	char word[3][20], verification[3][20];

	user(word, verification);
	verify(verification);



	return 0;
}
