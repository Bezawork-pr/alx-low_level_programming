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
 *
 * @format: Format of what needs to be printed
 *
 * Return:int
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, len, rt;
	int (*fn)(va_list);
	char *ipt;

	i = len = 0;
	if (format == NULL)
	{
		return (-1);
	}/* return -1 if specifier is not provided */
	va_start(args, format);
	while(format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}/* print direct inputs */
		if ((format[i] == '%') && (format[i + 1] == '\0'))
		{
			return (-1);
		}/* return -1 if a specifier is not listed after % */
		else if (format[i] == '%')
		{
			ipt = format[i + 1];
			fn = get_sp_func(ipt);
			if (fn == '\0')
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
	_putchar('\n'); /* Add new line */
	return (len);
}

