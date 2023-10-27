#include "main.h"
#include <stdio.h>
/**
 * _memset - prints buffer in hexa
 * @s: char.
 * @b: char.
 * @n: unsigned int.
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
	*(s + n - 1) = b;
	n--;
	}
	return (s);
}
