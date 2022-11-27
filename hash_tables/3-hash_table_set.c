#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: ptr to the hash_table_t 
 * @key: key to the hash table
 * @value: value assocaited with the key
 * Return: 1 if it succeeded 0 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int str_size, key_exist;

	hash_node_t *hash_node;
	unsigned long int index;
	const unsigned char *u_key;

	if (ht == NULL || key == NULL)
		return (0);
	u_key = (const unsigned char *)key;
	str_size = check_key_size(key);
	if (str_size == 0)
		return (0);
	index = key_index(u_key, ht->size);
	key_exist = k(ht, key, index, value);
	if (key_exist == 0)
		return (1);

	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);

	hash_node->key = strdup(key);
	hash_node->value = strdup(value);
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}

