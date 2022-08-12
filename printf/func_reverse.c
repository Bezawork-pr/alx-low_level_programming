#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: buffer ponter
 *
 * @src: string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		dest[i + 1] = '\0';
	}
	return (dest);
}
/**
 * rev_string - reverse a strinG
 *
 * @s: takes strng
 *
 * Return: int
 */
char *rev_string(char *s)
{
	int i = 0;
	int count = 0;
	int m;
	char *rev;

	for (; s[i] != '\0'; i++)
	{
		count++;
	}
	count++;
	rev = malloc(sizeof(s) * (count));
	if (rev == NULL)
	{
		return (NULL);
	}
	count--;
	for (m = 0; count >= 0; count--)
	{
		rev[m] = s[count];
		rev[m + 1] = '\0';
		m++;
	}
	_strcpy(s, rev);
	return (s);
}
/**
 * _print_rev - Prints in reverse
 *
 * @s : takes strings
 *
 * Return: void
 */
int _print_rev(va_list arg)
{
	int i = 0;
	int count = 0;
	char *s;
	char *rev;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		return (-1);
	}
	rev = rev_string(s);
	for (; rev[i] != '\0'; i++)
	{
		_putchar(rev[i]);
		count++;
	}
	return (count);
}
