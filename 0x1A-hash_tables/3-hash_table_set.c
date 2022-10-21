#include "hash_tables.h"
/**
 * free_node - frees node
 *
 * @node: to be freed
 *
 * Return: void
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
/**
 * new_node_create - allocates memory and check malloc returns
 *
 * @ht: hash table
 *
 * @key: string
 *
 * @value: value to be stored
 *
 * Return: pointer to the newly created node
 */
hash_node_t *new_node_create(hash_table_t *ht,
		const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if ((new == NULL) || ht == NULL
			|| key == NULL  || value == NULL || strlen(key) == 0 ||
			ht->size == 0)
	{
		free_node(new);
		return (NULL);
	}
	new->key = strdup((char *)key);
	if (new->key == NULL)
	{
		free_node(new);
		return (NULL);
	}
	new->value = strdup((char *)value);
	if (new->value == NULL)
	{
		free_node(new);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}
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
	hash_node_t *new, *temp, *checker;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	new = new_node_create(ht, key, value);
	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		checker = ht->array[index];
		while (checker)
		{
			if (strcmp(key, checker->key) == 0)
			{
				checker->value = strdup((char *)value);
				if (checker->value == NULL)
				{
					free_node(new);
					return (0);
				}
				return (1);
			}
			checker = checker->next;
		}
		temp = ht->array[index];
		ht->array[index] = new;
		new->next = temp;
	}
	return (1);
}
