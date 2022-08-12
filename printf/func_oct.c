#include "main.h"
int _print_octal(va_list arg)
{
	unsigned int ocm[50];
	unsigned int num;
	int i , j, len;

	len = 0;
	num = va_arg(arg, unsigned int);
	if (num == 0)
	{
		_putchar(0 + '0');
		len++;
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
		len++;
	}
	return (len);
}
