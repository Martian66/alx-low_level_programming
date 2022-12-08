#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data
 * of a linked list
 * @head: pointer to the list
 *
 * Return: sum of date, else
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
