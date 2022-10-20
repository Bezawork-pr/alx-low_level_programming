/**
 * hash_djb2_copy - This function is the implementation of djb2 algorithm
 *
 * @str: string to be hashed
 *
 * Return: the hashed string unique number
 */
unsigned long int hash_djb2_copy(const unsigned char *str)
{
	unsigned long int i;
	unsigned long int hash = 5381;

	for (i = 0; str[i] != '\0'; i++)
	{
		hash = (hash * 33) + (int)str[i];
	}
	return (hash);
}
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
	int thekey = hash_djb2_copy(key);

	return (thekey % size);
}
