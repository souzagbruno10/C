#include <stdio.h>
#include <string.h>

void user (char word[5][20], char verification[5][20])
{	
	printf("\n==== VERIFICADOR DE CARACTERE ====");

	for (int i = 0; i < 5; i++)
	{
		int count = i + 1;
		printf("\nDigite a %d palavra: ", count);
		scanf("%s", word[i]);
		printf("\n------------------------------");
		strcpy(verification[i],word[i]);//copia o conteudo armazenado na array da variavel word para verification;
	}
}
void verify (char verification[5][20])
{
	char letter;

	printf("\nDigite o caractere que deseja buscar: ");
	scanf(" %c", &letter);
	printf("\n---------------------------------------");

	for (int i = 0; i < 5; i++)
	{      
                if (strchr(verification[i],letter))//busca o caractere no conteudo seguindo a ordem da array
                {
                printf("\nAs palavras com o caractere [%c] são [%s] .", letter, verification[i]);
                }	
        }
	
}


int main (void)
{
	char word[5][20], verification[5][20];

	user(word, verification);
	verify(verification);

	return 0;
}


