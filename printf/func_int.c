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
	int num, place, printed_char;
	unsigned int n;

	num = va_arg(arg, int);
	printed_char = 0;
	place = 1;
	if (num < 0)
	{
		_putchar('-');
		n = num * -1;
		printed_char++;
	}
	else
		n = num;
	while ((n / place) > 9)
	{
		n = n / place;
		place = place * 10;
	}

	while (place >= 1)
	{
		_putchar((n / place) + '0');
		n %= place;
		place /= 10;
		printed_char++;
	}
	return (printed_char);

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
