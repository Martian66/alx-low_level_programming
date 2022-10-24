#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: singly linked list to print
 * Return: number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t k;

	for (k = 0; h; k++)
		h = h->next;
	return (k);
}
