

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	//enquanto a condicao de cima for verdadeira a condicao debaixo nao eh chamada;

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}

/*#include <stdio.h>

int main (void)
{
	char src[15] = "Virei Cadete";
	char dest[10] = "Pisciner";
	int n = 10;
	
	printf("Antes dest --> %s", dest);

	ft_strncpy(dest, src, n);

	printf("\nDepois dest --> %s", dest);


	return 0;
}*/
