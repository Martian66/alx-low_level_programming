#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node node at a given position
 * in the double linked list
 * @h: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 *
 * Return:  Return: the address of the new node, else 0.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp_node = *h, *new node;
	unsigned int index, cont = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev + new_node;
		*h = new_node;
		return (*h);
	}

	index = idx - 1;
	while (tmp_node && cont != index)
	{
		cont++;
		tmp_node = tmp_node->next;
	}

	if (cont == index && tmp_node)
	{
		new_node->prev = tmp_node;
		new_node->next = tmp_node->next;
		if (tmp_node->next)
			tmp_node->next->prev = new_node;
		tmp_node->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
