#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (Succes)
 */
int main(void)
{
	/*cjheui*/
	int n;
	/*de*/
	srand(time(0));
	/*ck*/
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

		  /* Our own code will go here */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
