#include "search_algos.h"
#include <math.h>
/**
 * jump_search -  a function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * assume that array will be sorted in ascending order
 * You have to use the square root of the size of the array as the jump step.
 *
 * @array: is a pointer to the first element of the array to search in
 *
 * @size:  is the number of elements in array
 *
 * @value: is the value to search for
 *
 * Return:  first index where value is located
 * If value is not present in array or
 * if array is NULL, your function must return -1
 *
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = round(sqrt(size)), i, start, end;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i = i + jump)
	{
		if (array[i] == value)
		{
			start = i - jump;
			end = i;
			printf("Value found between indexes [%lu] and [%lu]\n", start, end);
			break;
		}
		else if (array[i] > value)
		{
			start = i - jump;
			end = i;
			printf("Value found between indexes [%lu] and [%lu]\n", start, end);
			break;
		}
		else
			printf("Value checked array[%lu] = [%lu]\n", i, i);
	}
	if (i > size)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
		if (array[i] == value)
			return (i);
		return (-1);
	}
	else
	{
		for (; start <= end; start++)
		{
			printf("Value checked array[%lu] = [%lu]\n", start, start);
			if (array[start] == value)
				return (start);
		}
	}
	return (-1);
}
