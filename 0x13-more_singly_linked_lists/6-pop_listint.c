#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -  a function that deletes the head node of a list
 * and returns the head node’s data (n).
 * @head: head of the list
 * Return: contents of head
 */

int pop_listint(listint_t **head)
{
	int k;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);
	tmp = current = *head;
	if (head)
	{
		k = current->next;
		free(tmp);
	}
	else
		k = 0;

	return (k);
}

