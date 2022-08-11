#include "main.h"
/**
 * _print_char - prints character
 *
 * @c: receives character to be printed
 *
 * Return: 0 on SUCESSS -> length of char
 */
int _print_char(va_list arg)
{
	char c = va_arg(arg, int);
	_putchar(c);
	return (1);
}
/**
 * _print_string - Print string
 *
 * @s: receives string to be printed
 *
 * Return: 0 on SUCESSS
 */
int _print_string(va_list arg)
{
	int i = 0;
	char *s = va_arg(arg, char *);

	for (; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
