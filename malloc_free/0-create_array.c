#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of char, and initializes it with specific char.
 * @size: int.
 * @c: char.
 * Return: pointer.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(size * sizeof(char));
	if (size == 0 || arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
