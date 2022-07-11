#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 *
 * @a: points to int
 *
 * @n : takes an int
 *
 * Return : void
 */
void print_array(int *a, int n)
{
	int m = 0;

	for (; m < n; m++)
	{
		printf("%d", a[m]);
		if (!(a[m] == a[n - 1]))
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
