#include "main.h"
#include <stdio.h>
/**
 * print_line - check the code
 *@n: int.
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if ((n == 0) || (n < 0))
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
