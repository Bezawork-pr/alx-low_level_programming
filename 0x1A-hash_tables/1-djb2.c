#include "hash_tables.h"
/**
 * hash_djb2 - This function is the implementation of djb2 algoritm
 *
 * @str: string to be hashed
 *
 * Return: the hashed string unique number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int i;
	unsigned long int hash = 5381;

	for (i = 0; str[i] != '\0'; i++)
	{
		hash = (hash * 33) + (int)str[i];
	}
	return (hash);
}
