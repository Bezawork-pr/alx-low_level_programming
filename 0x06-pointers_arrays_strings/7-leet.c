#include "main.h"
/**
 * leet - a function that encodes to 1337
 *
 * @rv: takes string
 *
 * Return: pointer
 */
char *leet(char *rv)
{
	char ch[] = "aAeEoOtTlL";
	char pass[] = "4433007711";
	int i = 0;
	int m;

	for (; rv[i] != '\0'; i++)
	{
		for (m = 0; ch[m] != '\0'; m++)
		{
			if (rv[i] == ch[m])
			{
				rv[i] = pass[m];
			}
		}
	}
	return (rv);
}
