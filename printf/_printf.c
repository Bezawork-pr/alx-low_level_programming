/**
 * File -_printf.c
 * Author:
 * 	 Bezawork Lindlof
 * 
 */
#include <stdarg.h>
#include <stdlib.>
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
	locate print_list[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_integer},
		{"i", _print_integer},
		{"b", _print_binary},
		{"u", _print_unsignedint},
		{"o", _print_octal},
		{"x", print_hex},
		{"X", _print_HEX},
		{"r", _print_reversed},
		{"R", _print_rot13},
		{NULL, NULL}	
	};
	
	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	va_end;
}
