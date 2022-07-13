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
	int i = 0;
	int tmp;

	n = n - 1;

	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp; 	
		i++;
		n--;
	}
}
