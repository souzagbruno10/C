//Este é um exemplo de como a biblioteca string.h roda por debaixo do comando strcpy(char dest, char src) copiando um vetor de caracteres da origem para o destino;;

char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;

}


#include <stdio.h>

int main (void)
{
	char src[20] = "Hello World!";
	char dest[20] = "Xabl@u";
	
	printf("Antes dest --> %s ", dest)
		;
	ft_strcpy(dest, src);

	printf("\nDepois dest --> %s", dest);


	return 0;
}
