#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints different format
 *
 * @format: Format to be printed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, n, count;
	char *separator, *str;
	va_list dfargs;

	i = n = count = 0;
	separator = ", ";
	while (format[i] != '\0')
	{
		count++;
		i++;
	}
	va_start(dfargs, format);
	while (n < count)
	{
		if (n == (count - 1))
			separator = "";
		switch (format[n])
		{
			case('c'):
				printf("%c%s", va_arg(dfargs, int), separator);
				break;
			case('i'):
				printf("%d%s", va_arg(dfargs, int), separator);
				break;
			case('f'):
				printf("%f%s", va_arg(dfargs, double), separator);
				break;
			case('s'):
				str = va_arg(dfargs, char *);
				if (str == NULL)
					printf("(nil)%s", separator);
				else
					printf("%s%s", str, separator);
				break;
		}
		n++;
	}
	va_end(dfargs);
	printf("\n");
}

