#include <stdio.h>
#include "main.h"
/**
 * lessthan_nine - Afunction that prints multiples result less than 10
 *
 * @row: takes int
 *
 * @colon: takes int
 *
 * Return: void
 */
void lessthan_nine(int row, int colon)
{
	int result = colon * row;

	if (result <= 9)
	{
		if (row == 9)
		{
			_putchar(' ');
			_putchar(result + '0');
		}
		else if (row == 0)
		{
			_putchar(result + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(' ');
			_putchar(result + '0');
			_putchar(',');
			_putchar(' ');
		}
	}

}
/**
 * morethan_ten - Print multiple more than 10
 *
 * @row: takes int
 *
 * @colon: takes int
 *
 * Return: void
 *
 */
void morethan_ten(int row, int colon)
{
	int result = row * colon;

	if (row == 9)
	{
		_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');
	}
	else if (row < 9)
	{
		_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
}
/**
* print_times_table - that prints the n times table, starting with 0
*
* @n: takes int
*
* Return: void
*
*/

void print_times_table(int n)
{
	int colon = 0;

	while ((colon < n) && ((colon < 15) && (colon > 0)))
	{
		int row = 0;

		while ((row < n) && (row < 15) && (row > 0))
		{
		int result = colon * row;

			if (result <= 9)
			{
				lessthan_nine(row, colon);
			}
			else
			{
				morethan_ten(row, colon);
			}
			row++;
		}
		_putchar('\n');
		colon++;
	}
}
