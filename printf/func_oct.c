#include "main.h"
/**
 * _print_octal - prints octal Number
 *
 * @arg: receivies argument from va_arg
 *
 * Return: length
 */
int _print_octal(va_list arg)
{
	unsigned int octalNum = 0, countval = 1, remainder;
	unsigned int deciNum = va_arg(arg, unsigned int);
	int length = 0, i = 0;
	unsigned int revOctal[20];

	while (deciNum != 0)
	{
		remainder = deciNum % 8;
		revOctal[i] = remainder;
		i++;
		octalNum += remainder * countval;
		countval = countval * 10;
		deciNum /= 8;
		length++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(revOctal[i] + '0');
		i--;
	}
	return (length);
}
