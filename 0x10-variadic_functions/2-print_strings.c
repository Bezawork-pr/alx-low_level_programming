#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings- Print string
 *
 * @separator: String to be printed between string
 * if separator is Null dont print
 * if one of the String is NULL print (nil)
 * @n: Number of string passed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *str;

	if (separator == NULL)
		return;
	va_start(args, n);
	for (; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}

