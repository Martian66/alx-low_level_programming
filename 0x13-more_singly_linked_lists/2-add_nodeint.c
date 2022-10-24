#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint -  a function that adds a new node
 *at the beginning of a listint
 *@head: current place in the list
 *@n: int to add to the list
 *
 * Return: pointer to current position in list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
