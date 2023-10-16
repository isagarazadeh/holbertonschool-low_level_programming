#include<stdio.h>

int main(void)
{
	int n = 0;

	for(n = 0; n < 10; n++)
	{
		if (n % 2 == 1)
		{
			printf("%d\n",n);
		}
	}
	return (0);
}
