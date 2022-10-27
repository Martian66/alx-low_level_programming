#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index -a function that deletes the node at index
 * @head: A pointer to the address of the head
 * @index: The index of the node to be deleted
 *
 * Return: On success - 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *subsequent;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	subsequent = current->next;
	current->next = subsequent->next;
	free(subsequent);
	return (1);
}