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
	unsigned long int lastBit;
	int i;

	for (i = 31; i >= 0; i--)
	{
		lastBit = n >> i;
		(lastBit & 1)? _putchar('1'): _putchar('0');
	}
}
