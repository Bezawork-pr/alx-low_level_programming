#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal.
 *
 * @n: Takes int
 *
 * Return:void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0;

		for (; i < n; i++)
		{
			int j = 0;

			for (; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
