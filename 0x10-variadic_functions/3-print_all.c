#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - print all
 *
 * @format: format for print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *separator = ", ";
	char *str;
	int i = 0, j = 0;
	va_list dfargs;

	va_start(dfargs, format);
	while (format && format[j])
		j++;
	while (format && format[i])
	{
		if (i == j - 1)
			separator = "";
		switch (format[i])
		{
			case ('c'):
				printf("%c%s", va_arg(dfargs, int), separator);
				break;
			case ('i'):
				printf("%d%s", va_arg(dfargs, int), separator);
				break;
			case ('f'):
				printf("%f%s", va_arg(dfargs, double), separator);
				break;
			case ('s'):
				str = va_arg(dfargs, char *);
				if (!str)
				{
					printf("(nil)%s", separator);
					break;
				}
				printf("%s%s", str, separator);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(dfargs);
}
