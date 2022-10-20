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
	hash_node_t **array;
	unsigned long int i;

	new_table = malloc(sizeof(new_table) * 2);
	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}
	array = malloc(sizeof(array) * size);
	if (array == NULL)
	{
		free(new_table);
		free(array);
		return (NULL);
	}
	new_table->size = size;
	for (i = 0; i < size; i++)
		array[i] = NULL;
	new_table->array = array;
	return (new_table);
}

