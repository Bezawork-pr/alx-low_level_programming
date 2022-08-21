#include "main.h"
/**
 * rot13 - Encodes string with rot13
 *
 * @str: takes string
 *
 * Return: Encoded string
 */
int _print_rot13(va_list arg)
{
	int i = 0;
	int m, k;
	char *rot;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	rot = va_arg(arg, char *);
	if (rot == NULL)
	{
		rot = "(null)";
	}
	for (; rot[i] != '\0'; i++)
	{
		for (m = 0; a[m] != '\0'; m++)
		{
			if (rot[i] == a[m])
			{
				rot[i] = r[m];
				break;
			}
		}

	}
	for (k = 0; rot[k] != '\0'; k++)
	{
		_putchar(rot[k]);
	}
	return (k);
}
