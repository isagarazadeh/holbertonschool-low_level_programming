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
		printf("Last digit of 98 is 8 and is greater than 5");
	}
	else if(y ==0)
	{
		printf("Last digit of 980 is 0 and is 0");
	}
	else
	{
		printf("Last digit of -98 is -8 and is less than 6 and not 0");
	}
	return (0);
}
