#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: size of the elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if no value found
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
