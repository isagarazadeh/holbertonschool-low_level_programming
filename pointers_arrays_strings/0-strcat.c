#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 * Return: char pointer.
 */
char *_strcat(char *dest, char *src)
{
	int dest_l, src_l, i;

	dest_l = strlen(dest);
	src_l = strlen(src);
	i = 0;
	while (i <= src_l)
	{
		*(dest + dest_l) = *(src + i);
		dest_l++;
		i++;
	}
	return (dest);
}
