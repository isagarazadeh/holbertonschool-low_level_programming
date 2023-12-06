#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - length of the elements in list.
 * @h: list.
 * Return: count.
 */
size_t list_len(const list_t *h)
{
	unsigned int count;

	count = strlen(h->str);
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("%d", count);
		}
		h = h->next;
		count++;
	}
	return (count);
}
