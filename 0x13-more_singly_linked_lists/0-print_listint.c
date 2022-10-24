#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a list
 * @h: singly linked list to print
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t k;

	for (k = 0; h; k++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (k);
}
