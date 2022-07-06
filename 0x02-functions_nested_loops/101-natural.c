#include <stdio.h>

/**
 * threefive_multiple - print multiple of 3 and 5 under 1024
 *
 * Return: void
 */

void threefive_multiple(void)
{
	int n = 0;
	int result;
	for (; n < 1024; n++)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
		{
			result = n++;
			
		}

	} 
	_putchar(result);
}
