int ft_str_is_printable(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if (32 <= str[i] && str[i] <= 126)
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
int main(void)
{
	char str[] = "x@b$$$";//1
	char str1[] = "\t";//0
	char str2[] = "\n";//0
	char str3[] = "";//1

	printf("Resultado: %d\n", ft_str_is_printable(str));
	printf("Resultado: %d\n", ft_str_is_printable(str1));
	printf("Resultado: %d\n", ft_str_is_printable(str2));
	printf("Resultado: %d\n", ft_str_is_printable(str3));

	return 0;
}
