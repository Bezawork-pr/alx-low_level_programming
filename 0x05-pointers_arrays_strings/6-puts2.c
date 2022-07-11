#include "main.h"
/**
 * puts2 -prints every other character of a string, starting with the first character
 *
 * @str: takes string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int m = 0;
	int count = 0;
	
	for(; str[m] != '\0'; m++)
	{
		count++;
	}
	count--;

	for(; str[i] != '\0' && i < count; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
