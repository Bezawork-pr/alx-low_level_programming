#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: Takes pointer to a string
 *
 * @c: Takes char
 *
 * Return: Pointer to a char
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int count = 0;
	char *temp;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			temp = &s[i];
			count = 1;
			break;
		}
	}
	if (count == 0)
	{
		temp = '\0';
	}
	return (temp);
}
