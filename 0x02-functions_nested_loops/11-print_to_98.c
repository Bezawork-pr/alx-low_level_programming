#include <stdio.h>
#include "main.h"
/**
 * add_comma - Add comma if not 98
 *
 * @n: takes int
 *
 * Return: void 
 */
void add_comma(int n)
{
	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		_putchar('\n');
	}
}

/**
 * print_to_98 -  prints all natural numbers from n to 98
 *
 * @n: takes int
 *
 * Return: void
 *
 */
void print_to_98(int n)
{
	if (n <= 98)
	{

		for (; n <= 98 ; n++)
		{
			if (n <= 9)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			add_comma(n);
		}
	}
	else
	{
		for (; n > 98 ; n--)
		{
			_putchar((n / 100) + '0');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
