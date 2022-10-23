#include "hash_tables.h"
/**
 * shash_table_create - creates a hash table with size
 *
 * @size: The size of the hashtable to be created
 *
 * Return: Pointer to hash table
 * Otherwise NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	shash_node_t **array;
	unsigned long int i;

	new_table = malloc(sizeof(new_table) * 100);
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
	new_table->shead = NULL;
	new_table->stail = NULL;
	return (new_table);
}

/**
 * free_node - frees nodes
 *
 * @node: to be freed
 *
 * Return: void
 */
void free_node(shash_node_t *node)
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
shash_node_t *new_node_create(shash_table_t *ht,
		const char *key, const char *value)
{
	shash_node_t *new;

	new = malloc(sizeof(shash_node_t));
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
	new->sprev = NULL;
	new->snext = NULL;
	return (new);
}
void bubble_sort(char *tobesorted[], char **sorted)
{
	char temp[800];
	int i, j, m = 0;

	for (i = 0; i < 1024; i++)
		sorted[i] = NULL;
	for (i = 0; i < 1023; i++)
	{
		if (tobesorted[i] != NULL)
		{
			sorted[m] = strdup(tobesorted[i]);
			m++;
		}
	}

	for (i = 0; i < 1023; i++)
	{
		for (j = 1; j < 1022 - i; j++)
		{
			if (sorted[j] != NULL)
			{
				if (strcmp(sorted[j - 1], sorted[j]) > 0)
				{
					strcpy(temp, sorted[j - 1]);
					strcpy(sorted[j - 1], sorted[j]);
					strcpy(sorted[j - 1], temp);
				}
			}
		}

	}
}
/**
 * shash_table_set - Add an element to the the hash table
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
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *temp, *checker;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	char **sortedkeys, **sorted, **lastsort, **lastsorted;
	unsigned long int i, previndex, nextindex, firstindex, lastindex;

	sortedkeys = malloc(sizeof(char *) * ht->size);
	sorted = malloc(sizeof(char *) * ht->size); 
	lastsort = malloc(sizeof(char *) * ht->size);
	lastsorted = malloc(sizeof(char *) * ht->size);
	for (i = 0; i < 1024; i++)
	{
		sortedkeys[i] = NULL;
		lastsort[i] = NULL;
	}
	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{	if (ht->array[i] != NULL)
			{
				sortedkeys[i] = strdup(ht->array[i]->key);
			}
		}
		bubble_sort(sortedkeys, sorted);
	}
	new = new_node_create(ht, key, value);
	if (ht->array[index] == NULL)
	{
		for (i = 1; i < 1024; i++)
		{
			if (sorted[i] != NULL)
			{
				if ((strcmp(new->key, sorted[i]) < 0) && (strcmp(new->key, sorted[i - 1]) > 0)) 
				{
					previndex = key_index((const unsigned char *)sorted[i - 1], ht->size); 
					nextindex = key_index((const unsigned char *)sorted[i], ht->size);
					new->sprev = ht->array[previndex];
					new->snext = ht->array[nextindex];
				}
			}
		}
		ht->array[index] = new;
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
				lastsort[i] = strdup(ht->array[i]->key); 
		}
		bubble_sort(lastsort, lastsorted);
		firstindex = key_index((const unsigned char *)lastsorted[0], ht->size);
		ht->shead = ht->array[firstindex];
		for (i = 0; lastsorted[i] != NULL; i++)
			;
		lastindex = key_index((const unsigned char *)lastsorted[i - 1], ht->size);
		ht->stail = ht->array[lastindex];

	}
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

/**
 * shash_table_get - get value from the hashtable
 *
 * @ht: hash table
 *
 * @key: String
 *
 * Return: Value if found
 * Otherwise NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	shash_node_t *temp;

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
/**
 * shash_table_print - print hash table
 *
 * @ht: the hash table
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	int flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	temp = ht->shead;
	while (temp)
	{
		if (flag == 1)
			printf(", ");
		flag = 1;
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
	}
	printf("}\n");
}
/**
 * hash_table_print - print hash table
 *
 * @ht: the hash table
 *
 * Return: void
 *
 void shash_table_print_rev(const shash_table_t *ht)
 {
 unsigned int long i;
 hash_node_t *temp;
 int flag = 0;

 if (ht == NULL || ht->array == NULL)
 return;
 printf("{");
 for (i = 0; i < ht->size; i++)
 {
 temp = ht->array[i];
 while (temp)
 {
 if (flag == 1)
 printf(", ");
 flag = 1;
 printf("'%s': '%s'", temp->key, temp->value);
 temp = temp->next;
 }
 }
 printf("}\n");
 }
 **
 * hash_table_delete - free memory
 *
 * @ht: table to be frees
 *
 * Return: void
 *
 void shash_table_delete(shash_table_t *ht)
 {
 unsigned long int i = 0;
 hash_node_t *current, *temp;

 while (i < ht->size)
 {
 current = ht->array[i];
 while (current)
 {
 temp = current;
 current = current->next;
 free(temp->key);
 free(temp->value);
 free(temp);
 }
 i++;
 }
 free(ht->array);
 free(ht);
 }*/
