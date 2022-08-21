#include "main.h"
void _print(unsigned int num, int length)
{
	if (num > 1)
		_print((num / 2), length + 1);
	_putchar((num % 2) + '0');
}
/**
 * _print_binary - convert to binary and print
 *
 * @arg: takes dec
 *
 * Return: length
 */
int _print_binary(va_list arg)
{
	int length = 0;
	unsigned int num = va_arg(arg, unsigned int);

	_print(num, length);
	return (length);
}
