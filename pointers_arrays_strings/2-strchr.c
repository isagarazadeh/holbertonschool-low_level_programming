#include <stdlib.h>
/**
 * _strchr -  locates a character in a string.
 * @s: string.
 * @c: character to be located.
 * Return: either pointer or NULL.
 */
char *_strchr(char *s, char c)
{
	while (*(s) != c && *(s) != '\0')
	{
		s++;
	}
	if (*(s) == c)
		return (s);
	return (NULL);
}
