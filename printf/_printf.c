#include <stdarg.h>
#include "main.h"
/**
 * _printf - getfunction based on
 * specifier on format after %
 *
 * @format: specifier for valgrid func
 *
 * Return: printed char on sucess
 * -1 on Failure
 */
int _printf(const char *format, ...)
{
	va_list args; /* va_list declared */
	unsigned int i, printed_char;
	int (*fn)(va_list);

	i = printed_char = 0;
	if (format == NULL)
		return (-1);/* return -1 if specifier is not provided */

	va_start(args, format);
	for (; format[i] != '\0'; i++) /* go through elements to get specifier */
	{
		if (format[i] == '%')
		{
			i++; /* increase by one to get identifier after % */
			fn = get_sp_func(format[i]);
			if (fn == NULL)
			{
				_putchar('%');
				_putchar(format[i]);
			}
			else
				printed_char = printed_char + fn(args);/* counting total length */
		}
		else
		{
			_putchar(format[i]);
			printed_char++;
		} /* print direct input */
	}
	va_end(args);
	return (printed_char);
}

