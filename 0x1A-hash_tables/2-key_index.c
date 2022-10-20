#include "hash_tables.h"
/**
 * key_index - Get key and use modules for index calculation
 *
 * @key: Strings to calculate key from
 *
 * @size: size of the array
 *
 * Return: index of the array to put value in
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int thekey = hash_djb2(key);

	return (thekey % size);
}
