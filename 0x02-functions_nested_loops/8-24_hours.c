#include <stdio.h>
#include "main.h"
/**
* jack_bauer - a function that prints every minute of the day
*
* Return: void
*/
void jack_bauer(void)
{
	int m = 0;
	int h = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			m = 0;

			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;

	}
}
