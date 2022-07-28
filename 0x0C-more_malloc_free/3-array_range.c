#include "main.h"
#include <stdlib.h>
/**
 * array_range- Create an arrayof integers
 *
 * @min: Minimum value of array
 *
 * @max: Maximum value of array
 *
 * Return: Pointer to array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, diff;

	if (min > max)
	{
		return (NULL);
	}
	diff = max -min;
	arr = malloc(sizeof(min) + sizeof(max) * diff);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < diff; i++)
	{
		arr[i] = i + min;
	}
	return (arr);


}
