#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * list
 * @head: pointer to the first element of the list.
 * @n: data
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new ==  NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		new->prev = tmp;
		tmp->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
