#include "main.h"
/**
 * swap_int - swaps the values of two ints
 *
 * @a: Points to int
 *
 * @b: Points to int
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
