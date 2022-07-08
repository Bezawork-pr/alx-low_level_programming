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
	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
