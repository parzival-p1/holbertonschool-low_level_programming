#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: key to the index
 * @size: hash table's size
 * Return: the index at which key/value pair should be stored
 * in the arr of the ht
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

