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

const list_t *tmp;
unsigned int k;

tmp = h;
for (k = 0; tmp; k++)
{
printf("[%u] %s\n", tmp->len, tmp->str);

tmp = tmp->next;

}
return (k);
}
