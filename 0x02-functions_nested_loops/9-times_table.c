#include <stdio.h>
#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
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
		}else
		{
			_putchar(' ');
			_putchar(result + '0');
			_putchar(',');
			_putchar(' ');
		}

}
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
			lessthan_nine(colon, row);
			} 
			else
			{
				if (row == 9)
				{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				}
				else 
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
					_putchar(',');
					_putchar(' ');
				} 
			} 
			row++;
		}
		_putchar('\n');
		colon++;

	}


}
