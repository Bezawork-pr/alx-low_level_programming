#include "main.h"
/**
 * _print_address - Prints address
 *
 * @arg: Takes arument from va_arg
 *
 * Return: length
 */
int _print_address(va_list arg)
{
	unsigned long hex[100], num = 0;
	int length = 0, i = 0;
	char *nil;

	num = va_arg(arg, unsigned long);
	nil = "(nil)";
	if (num == 0)
	{
		while (nil[i] != '\0') /* putchar nil if num = 0 */
		{
			_putchar(nil[i]);
			i++;
			length++;
		}
	}
	else if (num > 0)
	{
		_putchar('0'); /* Add 0X infront of hex num */
		_putchar('x');
		length += 2; /* Add length by 2 for 0X */
		while (num > 0)
		{
			if (num % 16 >= 10)
				hex[i] = 87 + (num % 16);
			else
				hex[i] = 48 + (num % 16);
			num = num / 16;
			i++;
		} /* change to hexa and store it in array */
		for (--i; i >= 0; i--)
		{
			_putchar(hex[i]);
			length++;
		} /* putchar in reverse as value is stored in reverse */
	}
	return (length);
}
