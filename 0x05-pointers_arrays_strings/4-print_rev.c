#include "main.h"
/**
 * print_rev - Prints in reverse
 *
 * @s : takes strings
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int count = 0;

	for (; s[i] != '\0'; i++)
	{
		count++;
	}
	for (; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
