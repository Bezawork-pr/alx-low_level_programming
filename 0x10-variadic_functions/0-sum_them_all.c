#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Add all parameters
 *
 * @n: Number of parameters
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);

}
