#include <stdlib.h>
/**
 *malloc_checked - malloc
 *@b: unsigned int.
 *Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
