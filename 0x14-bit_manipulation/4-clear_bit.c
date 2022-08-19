#include "main.h"
/**
 * clear_bit - sets the value to 0
 *
 * @n : number pointer
 *
 * @index: change value to 0 at
 * this index
 *
 * Return: 1 Success
 * or -1 when fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n = ((*n & ~(1UL << index))  |  (0 << index));
		if ((*n >> index) & 1)
			return (1);
	return (-1);
}
