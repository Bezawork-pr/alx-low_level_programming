#include "main.h"
/**
 * get_sp_func - Gets function
 * if the specifier from format
 * matches the list characters
 * provided here
 *
 * @c: recevies char
 * from _printf function
 * from the format list
 *
 * Return:  function
 * if specifier matches list
 * NULL, otherwise
 */
int (*get_sp_func(char c))(va_list)
{
	int m = 0;

	p pl[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_integer},
		{"i", _print_integer},
		{"b", _print_binary},
		{"u", _print_unsignedint},
		{"o", _print_octal},
		{"x", _print_hexc},
		{"X", _print_hexs},
		{"p", _print_address},
		{"R", _print_rot13},
		{"%", _print_percentile},
		{NULL, NULL}
	};

	while (pl[m].sp)
	{
		if (*pl[m].sp == c)
		{
			return (pl[m].f);
		}
		m++;
	}
	return (NULL);
}
