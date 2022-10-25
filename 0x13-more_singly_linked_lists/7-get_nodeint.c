#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of a list
 * @head: head of the list
 * @index: which node to stop at
 *
 * Return: NULL if pointer does not exist, else
 * the located node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	k = 0;
	while (k < index)
	{
		if (*head->next == NULL)
			return (NULL);
		head = head->next;
		k++;
	}
	return (head);
}
