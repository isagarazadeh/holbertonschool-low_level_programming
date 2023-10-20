#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - check the code
 *@n: int.
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j != i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		if (i < n - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
