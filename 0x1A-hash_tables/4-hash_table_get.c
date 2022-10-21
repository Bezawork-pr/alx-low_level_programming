#include "hash_tables.h"
/**
 * hash_table_get - get value from the hashtable
 *
 * @ht: hash table
 *
 * @key: String
 *
 * Return: Value if found
 * Otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *temp;

	if (ht == NULL || key == NULL ||
			ht->array == NULL || strlen(key) == 0 ||
			ht->array[index] == NULL)
		return (NULL);
	if (index < ht->size)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
			return (ht->array[index]->value);
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
