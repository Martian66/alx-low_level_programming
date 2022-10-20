#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: head of linked list
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
const list_t *current;
size_t;

c = 0;
current = h;
while (current != NULL)
{
printf("[%d] %s\n", current->len, current->str);

current = current->next;
c++;
}
return (c);
}