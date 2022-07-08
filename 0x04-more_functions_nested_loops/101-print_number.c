#include "main.h"
/**
 * print_number - Write a function that prints an integer
 *
 * @n: Takes int
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if ((n <= 9) && (n >= 0))
	{
		_putchar((n % 10) + '0');
	}
	else if ((n > 9) && (n < 100))
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if ((n >= 100) && (n < 1000))
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar((n / 1000) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
}
