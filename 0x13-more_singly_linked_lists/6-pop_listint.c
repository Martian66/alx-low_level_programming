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
	listint_t *tmp;
	int k;

	if (*head == NULL)
		return (0);

	tmp = *head;
	k = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (k);

}

