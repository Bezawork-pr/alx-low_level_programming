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
	int i = min;
	int count = 0;

	if (min > max)
	{
		return (NULL);
	}
	for (; i <= max; i++)
	{
		count++;
	}
	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);


}
