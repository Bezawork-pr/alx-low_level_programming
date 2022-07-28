#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocate memory
 *
 * @nmemb: member of array that memory is
 * going to be allocated for
 *
 * @size: type size
 *
 * Return: void pointer, Null if argument is 0
 * Null if fail to allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cal;
	unsigned int i = 0;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	cal = malloc(nmemb * size);
	if (cal == NULL)
	{
		return (NULL);
	}
	for (; i < nmemb * size; i++)
	{
		cal[i] = 0;
	}
	return (cal);
}
