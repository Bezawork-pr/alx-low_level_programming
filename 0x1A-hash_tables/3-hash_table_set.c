#include "hash_tables.h"
/**
 * hash_table_set - Add an element to the the hash table
 *
 * @ht: the hash table
 *
 * @key: the key
 *
 * @value: Value to be inserted
 *
 * Return: 1 on sucess
 * Otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	int index = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t) * 100);
	if ((new == NULL) || ht == NULL  || key == NULL  || value == NULL)
	{
		free(new);
		return (0);
	}
	new->key = (char *)key;
	new->value = (char *)value;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}
	free(new);
	return (0);
}