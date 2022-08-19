#include "main.h"
/**
 * print_binary - print binary
 *
 * @n : Decimal received as parameter
 * assign 32 which is size of integer in bits
 * use & with 1 to print either 1 or 0 to represent
 * bit
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((1 & n) + '0');
}
