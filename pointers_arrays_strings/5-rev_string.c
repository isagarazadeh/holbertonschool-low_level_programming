#include "main.h"
/**
 * rev_string - check the code
 *@s: char.
 */
void rev_string(char *s)
{
	int c = 0;
	char *a;

	while (*s != '\0')
	{
		*a = *s;
		s++;
		a++;
		c++;
	}
	s--;
	for (; c > 0; c--)
	{
		*s = *(a - c);
		s--;
	}
}
