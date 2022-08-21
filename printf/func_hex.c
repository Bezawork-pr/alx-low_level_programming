#include "main.h"
/**
 * _print_hexs - print hex
 *
 * @arg: receive unsigned int from va_arg
 *
 * Return: Length
 */
int _print_hexs(va_list arg)
{
	char hexadecimalNumber[200];
	unsigned int remainder;
	int i = 0;
	int length;
	unsigned int num = va_arg(arg, unsigned int);

	while (num != 0)
	{
		remainder = num % 16;
		if (remainder < 10)
		{
			hexadecimalNumber[i] = remainder + 48;
			i++;
		}
		else
		{
			hexadecimalNumber[i] = remainder + 55;
			i++;
		}
		num = num / 16;
	}
	hexadecimalNumber[i] = '\0';
	length = i - 1;
	for (--i; i >= 0; i--)
	{
		_putchar(hexadecimalNumber[i]);
	}
	length = i - 1;
	return (length);
}
/**
 * _print_hexc - converts integer to hex small
 *
 * @arg: receive unsigned from va_arg
 *
 * Return: length
 */
int _print_hexc(va_list arg)
{
	char hexadecimalNumber[200];
	unsigned int remainder;
	int i = 0;
	int length;
	unsigned int num = va_arg(arg, unsigned int);

	while (num != 0)
	{
		remainder = num % 16;
		if (remainder < 10)
		{
			hexadecimalNumber[i] = remainder + 48;
			i++;
		}
		else
		{
			hexadecimalNumber[i] = 87 + remainder;
			i++;
		}
		num = num / 16;
	}
	hexadecimalNumber[i] = '\0';
	length = i - 1;
	for (--i; i >= 0; i--)
	{
		_putchar(hexadecimalNumber[i]);
	}
	length = i - 1;
	return (length);
}
