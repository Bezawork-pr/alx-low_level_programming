#include "main.h"
/**
 * dectobinary - convert to binary and print
 *
 * @num: takes dec
 *
 * Return: length
 */
int _print_binary(va_list arg)
{
	unsigned int binaryNum[50];
	int i = 0;
	int length;
	unsigned int num = va_arg(arg, unsigned int);

	while (num > 0)
	{
		binaryNum[i] = num % 2;
		num = num / 2;
		i++;
	}
	length = i;
	for (--i; i >= 0; i--)
	{
		_putchar(binaryNum[i] + '0');
	}
	return (length);
}
