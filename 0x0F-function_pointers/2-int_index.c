#include "function_pointers.h"
#include <stdio.h>

/**
 *int_index - a function that searches for an integer
 *@array: array to search through
 *@size: size of array
 *@cmp: function pointer
 *
 * Return: first index for which cmp doesn't return 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i, k;

if (size > 0 && array && cmp)
{
for (i = 0; i < size; i++)
{

k = cmp(array[i]);
if (k)

break;
}
if (i < size)


return (i);
}
return (-1);

}

