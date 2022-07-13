#include "main.h"
/**
 * _strncpy - copies a string
 *
 * @dest: takes string
 *
 * @src: takes string
 *
 * @n: takes int
 *
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, count;

	i = count = 0;
	for (; (src[i] != '\0') && (i < n); i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
