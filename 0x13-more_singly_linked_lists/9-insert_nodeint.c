#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @head: head of the list
 * @idx: location to insert node
 * @n: value of inserted node
 * Return: pointer to the head of list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (index == 0)
	{	new->next = copy;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);
		copy = copy->next;
	}
	new->next = copy->next;
	copy->next = new;

	return (new);
}

