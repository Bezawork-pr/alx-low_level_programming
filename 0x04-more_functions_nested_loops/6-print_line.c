#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: Takes int
 *
 * Return:void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i = 0;

		for (; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
