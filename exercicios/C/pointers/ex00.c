void point (int *n)
{
	(*n)++;


}

#include <stdio.h>
int main(void)
{
	int number = 5;

	point(&number);

	printf("%d", number);
	
	return 0;
}
