#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - free list.
 * @head: list.
 * Return: free.
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		head = temp;
		temp = head->next;
		free(head->str);
		free(head);
	}
}
