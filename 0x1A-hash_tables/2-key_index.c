#include "hash_tables_h"

/**
 * key_index - sets a hash table
 * @key: the key
 * @size: the value for size
 *
 * Return: The index of the key
 *
 * Description: Uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
