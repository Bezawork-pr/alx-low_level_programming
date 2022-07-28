#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Allocate memory using malloc
 *
 * @b: Takes size of memory to be allocated
 *
 * Return: Pointer if SUCESS, otherwise
 * terminate with STATUS 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
