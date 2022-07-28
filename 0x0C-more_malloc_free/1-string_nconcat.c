#include "main.h"
#include <stdlib.h>
/**
 * len - Finds length
 *
 * @s: Takes string to calcluate length
 *
 * Return: length of string
 */
unsigned int len(char *s)
{
	int i = 0, count = 0;

	for (; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
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
 * _strcat- concats two string
 *
 * @dest: Takes string
 *
 * @src: takes string
 *
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int m = 0;
	int count = 0;

	for (; dest[i] != '\0'; i++)
	{
		count++;
	}
	for (; src[m] != '\0'; m++)
	{
		dest[count] = src[m];
		count++;
	}
	return (dest);
}
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
/**
 * string_nconcat- concatenates two strings
 *
 * @s1: string to be concatenated (ALL)
 *
 * @s2: string to be concatenated (up to n)
 *
 * @n: gives size of s2 to be concated
 *
 * Return: pointer to newly allocated memory
 * otherwise, NULL if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1 = len(s1);
	unsigned int lens2 = len(s2);
	unsigned int len;
	char *cp;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	cp = malloc(sizeof(*s1));
	cp = _strcpy(cp, s1);
	if (n >= lens2)
	{
		len = lens1 + lens2 + 1;
		s1 = malloc(sizeof(char) * len);
		s1 = _strcpy(s1, cp);
	}
	else
	{
		len = lens1 + n + 1;
		s1 = malloc(sizeof(char) * len);
		s1 = _strcpy(s1, cp);
	}
	if (s1 == NULL)
	{
		return (NULL);
	}
	_strncat(s1, s2, n);
	return (s1);
}
