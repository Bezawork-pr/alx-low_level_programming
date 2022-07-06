#include <stdio.h>
#include "main.h"
/**
* lessthan_nine - Adds space if less than 9
*
* @row - takes int
*
* @colon -takes int
*
* Return: Does not return
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
* times_table - prints the 9 times table, starting with 0
*
* Return: void
*
*/

void times_table(void)
{
	int colon = 0;

	while (colon < 10)
	{
		int row = 0;

		while (row < 10)
		{
		int result = colon * row;

			if (result <= 9)
			{
				lessthan_nine(row, colon);
			}
			else
			{
				morethan_nine(row, colon);
			}
			row++;
		}
		_putchar('\n');
	colon++;
	}	
}
