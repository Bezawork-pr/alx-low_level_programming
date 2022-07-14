#include "main.h"
/**
 * rot13 - encodes a string
 *
 * @rv: Takes string
 *
 * Return: pointer
 */
char *rot13(char *rv)
{
	int i = 0;
	int m;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; rv[i] != '\0'; i++)
	{
		for (m = 0; a[m] != '\0'; m++)
		{
			if (rv[i] == a[m])
			{
				rv[i] = r[m];
				break;
			}
		}

	}
	return (rv);
}
