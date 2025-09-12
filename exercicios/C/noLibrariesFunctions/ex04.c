int ft_struppercase(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
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
	char str[] = "xablau";

	printf("Antes : %s", str);

	ft_struppercase(str);

	printf("\nDepois : %s",str);

	return 0;
}
