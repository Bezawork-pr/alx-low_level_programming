#include "main.h"
/**
 * print_square - A function that print square
 *
 * @size: takes int
 *
 * Return: void
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i = 0;

		for (; i < size; i++)
		{
			int j = 0;

			for (; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
