#include"main.h"
/**
 * print_last_digit -  computes the absolute value of an integer.
 * @n: int.
 * Return: void.
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
	{
		r = -1 * r;
	}
	_putchar(r + '0');

	return (r);
}
