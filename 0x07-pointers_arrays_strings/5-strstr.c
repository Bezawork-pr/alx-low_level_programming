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
	int i, j, count;
	char *re;

	i = count = 0;
	for (; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				re = &haystack[j];
				count = 1;
				break;
			}
		}
		break;
	}
	if (count == 0)
	{
		re = '\0';
	}
	return (re);
}
