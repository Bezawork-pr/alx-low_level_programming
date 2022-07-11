#include "main.h"
/**
 * puts_half - Prints half of a string
 *
 * @str : takes string
 *
 * Return : void
 */
void puts_half(char *str)
{
	int count = 0;
	int i = 0;
	int m;

	for (; str[i] != '\0'; i++)
	{
		count++;
	}
	if (count % 2 == 0)
	{
		for (m = (count / 2); m < count; m++)
		{
			_putchar(str[m]);
		}
	}
	else
	{
		for (m = ((count - 1) / 2); m < count; m++)
		{
			_putchar(str[m + 1]);
		}
	}
	_putchar('\n');
}
