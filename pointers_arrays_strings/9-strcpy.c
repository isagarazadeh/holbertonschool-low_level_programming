#include "main.h"
#include <string.h>
/**
 * _strcpy - check the code
 *@dest: char.
 *@src: char.
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int l;
	l = strlen(src);

	while (l >= 0)
	{
		*(dest + l) = *(src + l);
		l--;
	}
	return (dest);
}
