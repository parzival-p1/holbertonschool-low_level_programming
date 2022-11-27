#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: ptr to the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *next;
	unsigned long int idx;

	if (!ht)
		return;
	for (idx = 0; idx < ht->size; idx++)
		for (tmp = ht->array[idx]; tmp; tmp = next)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	free(ht->array);
	free(ht);
}

