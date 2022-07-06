#include <stdio.h>
#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
*
* Return: Does not return
*/
void times_table(void)
{
	int row = 0;
	int colon = 0;

	while (colon < 10)
	{
		while (row < 10)
		{
			int result = colon * row;

			_putchar(result);
			_putchar(',');
			row++;
		}
		colon++;

	}


}
