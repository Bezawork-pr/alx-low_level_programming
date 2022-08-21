#include "main.h"
/**
 * _print_percentile - prints percentile
 *
 * @args: gets %
 * and prints %
 *
 * Return: length 1
 */
int _print_percentile(va_list args)
{
	char *p = va_arg(args, char *);

	if (p == NULL)
		return (-1);
	_putchar('%');
	return (1);
}
