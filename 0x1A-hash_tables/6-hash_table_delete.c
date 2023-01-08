#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *ptr = NULL, *ahead = NULL;

	while (i < ht->size)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			ahead = ptr->next;
			free(ptr->value);
			free(ptr->key);
			free(ptr);
			ptr = ahead;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
