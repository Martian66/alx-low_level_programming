#include "lists.h"

/**
 * print_dlistint -  function that prints all the elements of a dlistint_t
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t num = 0;

	while (node)
	{
		printf("%i\n", node->n);
		num++;
		node = node->next;
	}

	return (num);
}
