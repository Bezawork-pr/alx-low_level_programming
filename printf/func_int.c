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
	int i, len;
	int place = 1;
	int pn = num;

	len = i = 0;
	if (num < 0)
	{
		_putchar('-');
		num = -1 * num;
		len++;
	}
	while (num / 10)
	{
		num = num / 10;
		place = 10 * place;
	}
	while (pn / place)
	{
		_putchar((pn / place) + '0');
		place = place / 10;
		len++;
		if (place == 10)
		{
			_putchar((pn % place) + '0');
			len++;
			break;
		}
	}
	return (len);
}
/**
 * _print_unsignedint - print Unsigned int
 *
 * @num: Unsigned int
 *
 * Return: 0 on SUCESS
 */
int _print_unsignedint(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	unsigned int place = 1;
	unsigned int pn = num;
	int len = 0; 
	
	while (num / 10)
	{
		num = num / 10;
		place = 10 * place;
	}
	while (pn / place)
	{
		_putchar((pn / place) + '0');
		place = place / 10;
		len++;
		if (place == 10)
		{
			_putchar((pn % place) + '0');
			len++;
			break;
		}

	}
	return (len);
}
