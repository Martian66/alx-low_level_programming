#include "hash_tables.h"

/**
 * hash_table_print = prints a hash table
 * @ht: pointer to hash table structure
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr = NULL;
	unsigned int index = 0, tmp = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (index < ht->size)
	{
		if (ht->array[index] == NULL)
		{
			index++;
			continue;
		}
		if (temp == 1)
			printf(", ")
		temp = 1;
		prtr = ht->array[index];
		while (ptr)
		{
			printf("'%s': '%s'", ptr->key, ptr->value);
			if (ptr->next != NULL)
				printf(", ");
			ptr = ptr->next;
		}
		index ++;
	}
	printf("}\n");
}
