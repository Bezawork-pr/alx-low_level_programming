#include "main.h"
/**
 * _print_integer - Prints integer
 *
 * @num: recieves int to be printed
 *
 * Return: 0 on SUCESS
 */
int _print_integer(va_list arg)
{
	int num = va_arg(arg, int);
	int i = 0;
	int *str;

	if (num < 0)
	{
		_putchar('-');
		num = -1 * num;
	}
	while (num)
	{
		if (num / 10)
		{
			str[i]= (num % 10) + '0';
		}
		else
		{
			str[i] = (num % 10) + '0';
		}
	}
	if (num / 10)
		_print_integer(num / 10);
	_putchar(num % 10 + '0');
	return (0);
}
/**
 * _print_unsignedint - print Unsigned int
 *
 * @num: Unsigned int
 *
 * Return: 0 on SUCESS
 */
unsigned int _print_unsignedint(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	if (num / 10)
		_print_unsignedint(num / 10);
	_putchar(num % 10 + '0');
	return (0);
}
