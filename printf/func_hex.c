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
	char hexa[200];
	unsigned int temp;
	int i = 0;
	int length;
	unsigned int num = va_arg(arg, unsigned int);

	while (num != 0)
	{
		temp = num % 16;
		if (temp < 10)
		{
			hexa[i] = temp + 48;
			i++;
		}
		else
		{
			hexa[i] = temp + 55;
			i++;
		}
		num = num / 16;
	}
	hexa[i] = '\0';
	length = i - 1;
	for (--i; i >= 0; i--)
	{
		_putchar(hexa[i]);
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
	char hexa[200];
	unsigned int temp;
	int i = 0;
	int length;
	unsigned int num = va_arg(arg, unsigned int);

	while (num != 0)
	{
		temp = num % 16;
		if (temp < 10)
		{
			hexa[i] = temp + 48;
			i++;
		}
		else
		{
			hexa[i] = 87 + temp;
			i++;
		}
		num = num / 16;
	}
	hexa[i] = '\0';
	length = i - 1;
	for (--i; i >= 0; i--)
	{
		_putchar(hexa[i]);
	}
	length = i - 1;
	return (length);
}
