#include "main.h"
/**
 * _memcpy - a function that copies memory area
 *
 * @dest: Takes char pointer
 *
 * @src: Takes char pointer
 *
 * @n: takes unsigned int
 *
 * Return: A pointer to char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}

