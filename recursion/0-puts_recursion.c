#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts_recursion - check the code
 *@s: string.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else if (*s == '\0')
	{
		_putchar('\n');
	}
}
