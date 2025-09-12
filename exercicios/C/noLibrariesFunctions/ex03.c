int ft_str_is_numeric(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if(48 <= str[i] && str[i] <= 57)
		{//48 na ascii é 0 e 57 é 9
		
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
	char str[] = "0123456789";
	char str1[] = "";
	char str2[] = "xablau";

	printf("Resultado : %d\n", ft_str_is_numeric(str));//1
	printf("Resultado : %d\n", ft_str_is_numeric(str1));//1
	printf("Resultado : %d", ft_str_is_numeric(str2));//0

	return 0;
}
