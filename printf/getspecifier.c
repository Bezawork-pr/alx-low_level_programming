#include "main.h"
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
		{"r", _print_rev},
		{"R", _print_rot13},
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
