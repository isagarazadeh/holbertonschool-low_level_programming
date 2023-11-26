#include <stdlib.h>
/**
 * array_iterator - iterates in array
 * @array: array.
 * @size: size of array.
 * @action: action.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
