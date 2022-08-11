#include "main.h"
/**
 * rot13 - Encodes string with rot13
 *
 * @str: takes string
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
	int i = 0;
	int m;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; str[i] != '\0'; i++)
	{
		for (m = 0; a[m] != '\0'; m++)
		{
			if (str[i] == a[m])
			{
				str[i] = r[m];
				break;
			}
		}

	}
	return (str);
}
