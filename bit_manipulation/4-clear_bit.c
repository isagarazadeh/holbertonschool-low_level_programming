#include "main.h"
/**
 * clear_bit - sets bit to 0 at the given index.
 * @n: number address.
 * @index: index.
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = *n, num_to_remove = 1;
	unsigned int size_ulong = sizeof(num) * 8, i = 0;

	if (index < size_ulong)
	{
		if (((num >> index) & 1) == 1)
		{
			while (i != index)
			{
				num_to_remove *= 2;
				i++;
			}
			num = num - num_to_remove;
			*n = num;
		}
		return (1);
	}
	else
		return (-1);
}
