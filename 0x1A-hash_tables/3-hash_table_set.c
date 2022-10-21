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
	hash_node_t *new, *temp;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if ((new == NULL) || ht == NULL  
			|| key == NULL  || value == NULL || strlen(key) == 0 ||
			ht->size == 0)
	{
		free(new);
		return (0);
	}
	new->key = strdup((char *)key);
	new->value = strdup((char *)value);
	new->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			ht->array[index]->value = strdup((char *)value);
			free(new);
		}
		else
		{
			temp = ht->array[index];
			ht->array[index] = new;
			new->next = temp;
		}
	}
	return (1);
}
