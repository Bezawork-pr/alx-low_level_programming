#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 *
 * @array: array received
 *
 * @size: size of array received
 *
 * @cmp: fuction to be implemented on array members
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
