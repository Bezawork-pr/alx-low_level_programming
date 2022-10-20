#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table with size
 *
 * @size: The size of the hashtable to be created
 *
 * Return: Pointer to hash table
 * Otherwise NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **new_node;

	new_table = malloc(sizeof(new_table) * 2);
	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_node = malloc(sizeof(new_node) * size);
	if (new_node == NULL)
	{
		free(new_table);
		free(new_node);
		return (NULL);
	}
	new_table->size = size;
	new_table->array = new_node;
	return (new_table);
}

