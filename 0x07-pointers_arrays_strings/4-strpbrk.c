#include "main.h"
/**
 * _strpbrk -searches a string for any of a set of bytes
 *
 * @s : Takes pointer to string
 *
 * @accept: Takes pointer to string
 *
 * Return: Pointer to char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, count;
	char *re;

	i = count = 0;
	for (; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if ((count == 0) || (count > j))
				{
					count = j;
				}
				re = &s[count];
			}
		}
	}
	if (count == 0)
	{
		re = '\0';
	}
	return (re);
}
