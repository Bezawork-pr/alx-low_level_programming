#include "main.h"
/**
 * get_bit - get value of bit at index given
 *get value using >> bitwise operator
 * @n: Takes number
 *
 * @index: index we check bit from
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num, i = 31;

	if (index > 31)
		return (-1);
	while (i >= 0)
	{
		num = n >> index;
		return (num & 1);
		i--;
	}
	return (-1);
}
