#include "main.h"
int _print_octal(va_list arg)
{
	unsigned int ocm[50], num;
	int i , j;

	num = va_arg(arg, unsigned int);
	if (num == NULL)
	{
		return (-1);
	}
	for (i = 0; num > 0; i++)
	{
		ocm[i] = num % 8;
		num = num / 8;
	}
	j = i - 1;
	for (; j >= 0; j--)
	{
		_putchar(ocm[j]);
	}
	return (i);
}
