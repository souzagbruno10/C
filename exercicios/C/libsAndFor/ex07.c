#include <stdio.h>
#include <string.h>


void compare(char *word1, char *word2)
{

	if (strcmp(word1, word2) == 0)
	{
		printf("\nStrings iguais!");
	}
	else if (strcmp(word1, word2) < 0)
	{
		printf("\nString 1 menor que a String 2");
	}
	else
	{
		printf("\nString 1 maior que a String 2");
	}
	
	
}

int main ()
{

	char word1[] = "Z";
	char word2[] = "Z";

	compare(word1, word2);

	return 0;
}
