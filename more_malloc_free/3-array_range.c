#include <stdlib.h>
#include <string.h>
/*
 *array_range - rangeofarray.
 *@min: int.
 *@max: max.
 *return: result.
 *
 */
int *array_range(int min, int max)
{
	int *result;
	int i = 0;
	int j = 0;

	result = malloc((max - min + 1) * sizeof(int));
	if (min > max)
		return (NULL);
	if (result == NULL)
		return (NULL);
	for (i = min; i<= max; i++)
	{
		result[j] = i;
		j++;
	}
	return (result);
}
