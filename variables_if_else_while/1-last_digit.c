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
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	y = n % 10;
	if(y > 5)
	{
		printf("%d Last digit of 98 is 8 and is greater than 5", y);
	}
	else if(y ==0)
	{
		printf("%d Last digit of 980 is 0 and is 0", y);
	}
	else
	{
		printf("%d Last digit of -98 is -8 and is less than 6 and not 0", y);
	}
	return (0);
}
