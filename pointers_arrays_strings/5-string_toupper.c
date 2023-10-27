#include "main.h"
#include <string.h>
/**
 * string_toupper - check the code
 *@s: variable.
 *Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
