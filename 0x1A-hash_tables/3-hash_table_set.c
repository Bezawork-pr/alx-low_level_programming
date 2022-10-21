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
	hash_node_t *new, *temp, *checker;
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
	if (new->key == NULL)
		return (0);
	new->value = strdup((char *)value);
	if (new->value == NULL)
		return (0);
	new->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		/*if (strcmp(key, ht->array[index]->key) == 0)
		{
			ht->array[index]->value = strdup((char *)value);
			if (ht->array[index]->value == NULL)
				return (0);
			free(new);
		}*/
		/*if
		{*/
			checker = ht->array[index];
			while (checker)
			{
				if (strcmp(key, checker->key) == 0)
				{
					checker->value = strdup((char *)value);
					printf("%s", checker->value);
					printf("Do u get here");
					return (1);
				}
				checker = checker->next;
			}
			temp = ht->array[index];
			ht->array[index] = new;
			new->next = temp;
		/*}*/
	}
	return (1);
}
