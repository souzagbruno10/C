int ft_str_is_lowercase(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if('a' <= str[i] && str[i] <= 'z')
		{
		
		}
		else
		{
			return 0;
		}
		i++;
	}
return 1;

}

#include <stdio.h>

int main (void)
{
	char str[] = "xablau";
	char str1[] = "xAblau";
	char str2[] = "";

	printf("Resultado: %d\n", ft_str_is_lowercase(str));//1
	printf("Resultado: %d\n", ft_str_is_lowercase(str1));//0
	printf("Resultado: %d\n", ft_str_is_lowercase(str2));//1

	return 0;
}
