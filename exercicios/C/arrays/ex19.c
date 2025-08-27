#include <stdio.h>

int ft_strlen(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count += 1;
		str++;
	}
	return count;
}

int main (void)
{
	char x [30] = "äbcdefghijklmnopqrstuvxwyz";

	ft_strlen(x);

	int lenght = ft_strlen(x);
	printf("%d", lenght);

	return 0;
}
