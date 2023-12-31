#include <stdlib.h>
#include <string.h>
/**
 * array_range - array.
 * @min: minimum.
 * @max: maximum.
 * Return: pointer.
 */
int *array_range(int min, int max)
{
	int *result;
	int i = 0;
	int j = 0;

	if (min > max)
		return (NULL);
	result = malloc((max - min + 1) * sizeof(int));
	if (result == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		result[j] = i;
		j++;
	}
	return (result);
}
