#include "main.h"
#include <stdio.h>
/**
 * print_square - check the code
 *@n: int.
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((size == 0) || (size < 0))
			{
				_putchar('\n');
			}
			_putchar('#');
		}
		_putchar('\n');
	}
}
