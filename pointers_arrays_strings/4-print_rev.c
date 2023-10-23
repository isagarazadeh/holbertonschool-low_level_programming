#include "main.h"
/**
 * print_rev - check the code
 *@s: char.
 */
void print_rev(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	s--;
	for (; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
