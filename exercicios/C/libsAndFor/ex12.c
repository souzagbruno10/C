#include <stdio.h>

int main ()
{
	for (int i = 1; i <= 40; i++)
	{
		if( i % 4 == 0 )
		{
			printf("PIN - ");
		}
		else
		{
			printf("%d - ", i);
		}
	}

	return 0;
}
