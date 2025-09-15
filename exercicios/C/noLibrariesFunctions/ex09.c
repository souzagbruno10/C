int ft_strcapitalize(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i - 1] == 0 || str[i - 1] == '\t' || str[i - 1] == '\n' || str [i - 1] == ' ') &&
				(str[i] >= 'a' || str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return 0;
}

#include <stdio.h>
int main (void)
{
	char str[] = "toda primeira letra de cada palavra vai ficar maiúscula!";

	printf("\nAntes : %s", str);

	ft_strcapitalize(str);

	printf("\nDepois : %s", str);

	return 0;
}
