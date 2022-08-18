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
	*n = ((*n & ~(1UL << index))  |  (0 << index));
		if ((*n >> index) == 0)
			return (0);
	return (-1);
}
