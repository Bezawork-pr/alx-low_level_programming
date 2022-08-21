#include "main.h"
/**
 * _print_char - prints character
 *
 * @arg: receives character to be printed
 *
 * Return: length of char
 */
int _print_char(va_list arg)
{
	char c = (char)va_arg(arg, int);

	_putchar(c);
	return (1);
}
/**
 * _print_string - Print string
 *
 * @arg: receives string to be printed
 *
 * Return: length
 */
int _print_string(va_list arg)
{
	int i = 0;
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	for (; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
