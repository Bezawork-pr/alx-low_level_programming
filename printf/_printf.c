/**
 * File -_printf.c
 * Author:
 * 	 Bezawork Lindlof
 * 
 */
#include <stdarg.h>
#include "main.h"
/**
 * _printf - counts number of characters
 * prints using putchar
 * @format: Format of what needs to be printed
 *
 * Return:int
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i, printed_char;
	int (*fn)(va_list);

	i = printed_char = 0;
	if (format == NULL)
		return (-1);/* return -1 if specifier is not provided */

	va_start(args, format);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			printed_char++;
		}/* print direct inputs */
		else if (format[i] == '%')
		{
			i++;
			fn = get_sp_func(format[i]);
			if (fn == NULL)
				return (-1);/* return -1 if cant get specifier */

			else
			{
				printed_char = printed_char + fn(args);
			}/* counting total length */
		}
	}	
	va_end(args);
	return (printed_char);
}

