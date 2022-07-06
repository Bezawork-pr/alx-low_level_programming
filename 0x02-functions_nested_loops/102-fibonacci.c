#include <stdio.h>
#include "main.h"

/**
 * main - print the first 50 Fibonacci numbers
 *
 * Return: int
 */

int main(void)
{
	long int n = 0;
	long int fib;

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
			printf("%u", fib);
			printf(", ");
		}
		else
		{
			fib = n + (n - 1);
			printf("%u", fib);
		}

	}
	printf("\n");
	return (0);
}
