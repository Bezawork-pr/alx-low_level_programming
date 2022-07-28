#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
	unsigned int lens1 = strlen(s1);
	unsigned int lens2 = strlen(s2);
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
	cp = strcpy(cp, s1);
	if (n >= lens2)
	{
		len = lens1 + lens2 + 1;
		s1 = malloc(sizeof(char) * len);
		s1 = strcpy(s1, cp);
	}
	else
	{
		len = lens1 + n + 1;
		s1 = malloc(sizeof(char) * len);
		s1 = strcpy(s1, cp);
	}
	if (s1 == NULL)
	{
		return (NULL);
	}
	strncat(s1, s2, n);
	return (s1);
}
