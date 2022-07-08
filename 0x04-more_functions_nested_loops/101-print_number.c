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
	int lastdigit;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);

	lastdigit = (n % 10) + '0';
	_putchar(lastdigit);
}
