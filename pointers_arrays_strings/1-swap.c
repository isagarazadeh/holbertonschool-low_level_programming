#include "main.h"
#include <stdio.h>
/**
 * swap_int - check the code
 *@a: int.
 *@b: int.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
