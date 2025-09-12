int ft_strlowercase(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}

return 0;
}

#include <stdio.h>
int main (void)
{
	char str[] = "XABLAU";

	printf("Antes: %s", str);

	ft_strlowercase(str);

	printf("\nDepois: %s", str);

	return 0;
}
