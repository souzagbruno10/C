#include <stdio.h>
#include <string.h>


int main ()
{
	char name[50];
	int forbideen = 0;

	printf("\nDigite o nome de seu usuário: ");
	scanf("%s", name);

	printf("\nTamanho do seu nome %s de usuário é: %lu letras!", name, strlen(name));

	for (int i = 0; i < strlen(name); i++)
	{
		if(name[i] == '@' || name[i] == '#' || name[i] == '!' || name[i] == '$')
		{
			forbideen++;
		}
	}
		if (forbideen > 0)
                {
                        printf("\nUsuário inválido. %d caracteres proibidos!", forbideen);
                }
                else
                {
                        printf("\nUsuário Válido!");
                }
	
	return 0;
}
