#include "main.h"
/**
 * _strncat-concatenates two strings
 *
 * @dest: takes string
 *
 * @src: takes string
 *
 * @n: takes int
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, m, count;

	i = m = count = 0;
	for (; dest[i] != '\0'; i++)
	{
		count++;
	}
	for (; (m < n) && (src[m] != '\0') ; m++)
	{
		dest[count] = src[m];
		count++;
	}
	return (dest);
}
