#include "main.h"
/**
 *print_triangle - prints triangle
 *
 * @size: Takes int
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i = 1;

		for (; i <= size; i++)
		{
			int m = 0;
			int k = 0;

			for (; k < (size - i); k++)
			{
				if (k == (size - 1))
				{
					continue;
				}
				else
				{
					_putchar(' ');
				}
			}

			for (; m < i; m++)
			{
				_putchar('#');
				if (m == (i - 1))
				{
					_putchar('\n');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
