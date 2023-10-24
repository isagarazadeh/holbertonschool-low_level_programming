#include "main.h"
/**
 * _strcpy - check the code
 *@dest: char.
 *@src: char.
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		c++;
	}
	while (c != 0)
	{
		dest--;
		c--;
	}
	return (dest);
}
