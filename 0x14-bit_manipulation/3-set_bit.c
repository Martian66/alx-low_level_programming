#include "main.h"

/**
 * set_bit - a function that sets the value of a bit
 * to 1 at a given index
 * @n: A pointer to the bit.
 * @index: The index to set the value at
 *
 * Return: -1 if an error occurs else 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);

	return (1);
}
