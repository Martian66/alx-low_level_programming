#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - a function that allocates memory for an array
 *@nmemb: number of array
 *@size: size of array
 *
 *Return: Pointer to array, Null if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int k;

if (nmemb == 0 || size == 0)
	return (NULL);

arr = malloc(nmemb * size);
if (arr == NULL)
	return (NULL);

for (k = 0; k < (nmemb * size); k++)
	arr[k] = 0;

return (arr);
}
