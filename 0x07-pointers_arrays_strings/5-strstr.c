#include "main.h"
/**
 * _strstr - a function that locates a substring
 *
 * @haystack: takes string
 *
 * @needle: takes string
 *
 * Return: pointer to string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, countt, lengthn, star;
	char *re;

	i = lengthn = countt = star = 0;
	for (; needle[i] != '\0'; i++)
	{
		lengthn++;
	}
	for (j = 0; haystack[j] != '\0'; j++)
	{
		if (needle[0] == haystack[j])
		{
			star = j;
			re = &haystack[star];
			for (i = 0; needle[i] != '\0'; i++)
			{
				if (needle[i] == haystack[j + i])
				{
					countt++;
					break;
				}
				else
				{
					countt--;
					break;
				}
			}
		}
	}

	if (countt == 0)
	{
		re = '\0';
	}
	if (lengthn == 0)
	{
		re = '\0';
	}
	return (re);
}
