#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 *
 * @a: takes int pointer
 *
 * @size: takes int'
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum, sum2, temp, temp2;

	sum = sum2 = temp = temp2 = 0;
	for (i = 0; i < size * size; (i = i + size + 1))
	{
		sum += a[i];
		temp++;
	}
	for (i = 0; i < size * size; (i = i + size - 1))
	{
		temp2++;
		sum2 += a[i];
		if (temp < temp2)
		{
			break;
		}
	}
	printf("%d, %d\n", sum, sum2);

}

