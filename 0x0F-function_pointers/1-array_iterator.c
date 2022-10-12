#include "function_pointers.h"

/**
 *array_iterator - a function that executes a function
 *given as a parameter on each element of an array
 *@array: array to execute function on
 *@size: size of array
 *@action: pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

size_t k;

if (array && action)
{

for (k = 0; k < size; k++)
{
action(array[k]);

}
}
}
