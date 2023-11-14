#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - duplicates string.
 * @str: string.
 * Return: pointer.
 */
char *_strdup(char *str)
{
	int i, length;
	char *dup;
	length = strlen(str);

	if (length == 0)
		return (NULL);
	dup = malloc (length * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
