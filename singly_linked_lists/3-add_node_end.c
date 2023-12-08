#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - add to tail.
 * @str: char.
 * @head: list.
 * Return: node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	while (*head != NULL && temp->next != NULL)
	{
		temp = temp->next;
	}
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		temp->next = new;
		new->next = NULL;
	}
	return (new);
}
