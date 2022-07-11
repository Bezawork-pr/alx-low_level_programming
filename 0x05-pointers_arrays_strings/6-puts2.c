#include "main.h"
/**
 * count - count string
 *
 * @s : takes string
 *
 * Return: int
 */
int count(char *s)
{
	int m = 0;
	int count = 0;

	for (; s[m] != '\0'; m++)
	{
		count++;
	}
	return (count);
}
/**
 * puts2 -prints every other character of a string
 *
 * @str: takes string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0' && i < count(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
