#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory
 *
 * @ptr: A pointer to memory previously
 * allocated by malloc
 *
 * @old_size: Is the size in byte of ptr
 *
 * @new_size: Is the size in byte of new 
 * allocation
 *
 * Return: ptr if old_size == new_size
 * if ptr is NULL - return malloc(new_size)
 * if new_size == 0 and ptr != NULL then free(ptr)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *dest, *src;
	unsigned int i = 0;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}
	src = ptr;
	dest = malloc(new_size);
	if (dest == NULL)
	{
		return (NULL);
	}
	for (; i < new_size && i < old_size; i++)
	{
		dest[i] = src[i];
	}
	free(ptr);
	return (dest);
	
}
