#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of array
 *
 * @a: Points to int
 *
 * @n: takes int
 *
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int i = n - 1;

	while (i >= 0)
	{
		if (i != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i--;
	}
	printf("\n");
}
