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
	while (n > 0)
	{
		*(dest + n - 1) = *(src + n - 1);
		n--;
	}
	return (dest);
}
