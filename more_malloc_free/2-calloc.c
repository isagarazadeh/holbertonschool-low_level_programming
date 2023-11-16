#include <stdlib.h>
#include <string.h>

/**
 * _calloc - calloc.
 * @nmemb: member number.
 * @size: size of each member.
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		s[i] = 0;
	}
	return (s);
}
