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
		int i = 0;

		for (; i <= size; i++)
		{
			int m = 0;
			int k = 0;

			for (; k < (size - i); k++)
			{
				_putchar(' ');
			}

			for (; m < i; m++)
			{
				_putchar('#');
			} 
			if (i == size)
			{
				continue;
			} 
			else
			{
				_putchar('\n');
			} 
		}
	}
	else
	{
		_putchar('\n');
	}
}
