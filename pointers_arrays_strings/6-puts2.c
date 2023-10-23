#include "main.h"
#include <string.h>
/**
 * puts2 - check the code
 *@str: char.
 */
void puts2(char *str)
{
	int c = 0;
	int length = strlen(str);

	for (c = 0; c < length; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
