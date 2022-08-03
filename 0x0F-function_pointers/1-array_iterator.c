#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator- Executes function passed on each array element
 *
 * @array: array passed
 *
 * @size: size of array
 *
 * @action: function passed
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if ((array == NULL) || (action == NULL))
	{
		return;
	}
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
