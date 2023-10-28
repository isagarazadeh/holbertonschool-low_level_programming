#include "main.h"
/**
 * _memcpy - check teh code
 * @dest: char.
 * @src: char.
 * @n: unsigned int.
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest + i);
}
