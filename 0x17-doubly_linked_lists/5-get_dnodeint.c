#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the list.
 * @index: the nth node.
 *
 * Return: nth node, else 0.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int num = 0;

	while (node && num != index)
	{
		num++;
		node = node->next;
	}
	if (node && sum == index)
		return (node);
	return (NULL);
}
