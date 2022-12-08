#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a double
 * linked list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t num = 0;

	while (node)
	{
		num ++;
		node = node->next;
	}

	return (num);
}
