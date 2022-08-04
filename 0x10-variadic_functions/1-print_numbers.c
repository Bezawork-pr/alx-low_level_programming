#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers- prints numbers
 *
 * @separator: string to be printed between numbers
 *
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	if (separator == NULL)
	{
		return;
	}
	va_start(args, n);
	for (; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", va_arg(args, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(args, int));
		}
	}
	printf("\n");
	va_end(args);
}
