#include "main.h"
#include <stdlib.h>
/**
 * len - Finds length
 *
 * @s: Takes string to calcluate length
 *
 * Return: length of string
 */
unsigned int lencount(char *s)
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
	int len = lencount(src) + 1;
	
	dest = malloc(sizeof(*src) * (len +1));
	if (dest == NULL)
	{
		return (NULL);
	}
	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
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
	int lendest = lencount(dest) + 1;
	int len = lencount(src) + lencount(dest) + 1;
	char *cpst;	
	
	cpst = malloc(sizeof(*dest) * lendest);
	if (cpst == NULL)
	{
		return (NULL);
	}
	cpst = _strcpy(cpst, dest);
	dest = malloc(sizeof(*dest) * len);
	if (dest == NULL)
	{
		return (NULL);
	}
	dest = _strcpy(dest, cpst);
	free(cpst);
	for (; dest[i] != '\0'; i++)
	{
		count++;
	}
	for (; src[m] != '\0'; m++)
	{
		dest[count] = src[m];
		count++;
	}
	dest[count + 1] = '\0';
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
	int i, m, count, len;
	int lendest = lencount(dest) + 1;
	char *cpsnt;

	i = m = count = 0;
	len = lencount(dest) + n + 1;
	cpsnt = malloc(sizeof(*dest) * lendest);
	if (cpsnt == NULL)
	{
		return (NULL);
	}
	cpsnt = _strcpy(cpsnt, dest);
	dest = malloc(sizeof(*dest) * len);
	if (dest == NULL)
	{
		return (NULL);
	}
	dest = _strcpy(dest, cpsnt);
	free(cpsnt);
	for (; dest[i] != '\0'; i++)
	{
		count++;
	}
	for (; (m < n) && (src[m] != '\0') ; m++)
	{
		dest[count] = src[m];
		count++;
	}
	dest[count + 1] = '\0';
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
	unsigned int lens1 = lencount(s1);
	unsigned int lens2 = lencount(s2);
	unsigned int len;
	unsigned int nc;
	char *cp;
	
	if ((s1 == NULL) && (s2 == NULL))
	{
		s1 = "";
		s2 = "";
	}

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	cp = malloc(sizeof(*s1) * (lens1 + 1));
	cp = _strcpy(cp, s1);
	if (n >= lens2)
	{
		len = lens1 + lens2 + 1;
		s1 = malloc(sizeof(char) * len);
		if (s1 == NULL)
		{
			return (NULL);
		}
		s1 = _strcpy(s1, cp);
		free(cp);
		s1 = _strcat(s1, s2);
	}
	else
	{
		len = lens1 + n + 1;
		s1 = malloc(sizeof(char) * len);
		if (s1 == NULL)
		{
			return (NULL);
		}
		s1 = _strcpy(s1, cp);
		free(cp);
		s1 = _strncat(s1, s2, n);
	}
	nc = lencount(s1);
	s1[nc] = '\0';
	return (s1);
}
