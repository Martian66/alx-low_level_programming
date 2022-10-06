#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: string
 *
 * Return: A pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{

void *p = NULL;

p = malloc(b);
if (p == NULL)
{
	exit(98);

}

return (p);
}
