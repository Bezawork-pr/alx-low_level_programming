#include <stdio.h>
#include "main.h"

/**
 * main - print the first 50 Fibonacci numbers
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	int fib;

	while ((n <= 12586269025) && (n >= 0) )
	{
		if(n == 0)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		else if(n < 12586269025)
		{
			fib = n + (n - 1);
			_putchar(fib);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			fib = n + (n - 1);
			_putchar(fib);
		}

	}
	printf("\n");
	return (0);
}
