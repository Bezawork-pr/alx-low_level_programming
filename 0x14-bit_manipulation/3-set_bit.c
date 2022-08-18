#include "main.h"
/**
 * set_bit - set bit to 1 at index given
 *
 * @n : decimal value given parameter
 *
 * @index: position to change value to 1
 *
 * Return: 1 success
 * -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value = 1 << index;

	*n = value | *n;
		if ((*n >> index) == 1)
			return (1);
	return (-1);
}
