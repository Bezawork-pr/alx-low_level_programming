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
	unsigned int i, len, rt;
	int (*fn)(va_list);

	i = len = rt = 0;
	if (format == NULL)
	{
		return (-1);
	}/* return -1 if specifier is not provided */
	va_start(args, format);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}/* print direct inputs */
		else if (format[i] == '%')
		{
			i++;
			fn = get_sp_func(format[i]);
			rt = fn(args);
			if (fn == NULL)
			{
				return (-1);
			}/* return -1 if cant get specifier */
			else
			{
				rt = rt + fn(args);
				len = len + rt;
				return (len);
			}/* counting total length */
		}
	}	
	va_end(args);
	return (len);
}

