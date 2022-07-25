#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 *
 * @size: Takes unsigned int
 *
 * @c : Takes character
 *
 * Return: Pointer
 */
char *create_array(unsigned int size, char c)
{
	char *alsize;
	unsigned int i = 0;

	alsize = malloc(sizeof(*alsize) * size);
	if (size == 0)
	{
		return ('\0');
	}
	if (c == '\0')
	{
		return ('\0');
	}
	while (i < size)
	{
		alsize[i] = c;
		i++;
	}
	if (*alsize == '\0')
	{
		return ('\0');
	}
	return (alsize);

}
