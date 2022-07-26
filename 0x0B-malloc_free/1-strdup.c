#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - makes a copy
 *
 * @str: Takes a string
 *
 * Return: A pointer
 */
char *_strdup(char *str)
{
	char *cp;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	cp = malloc(sizeof(*cp) * (strlen(str) + 1));
	if (cp == NULL)
	{
		return (NULL);
	}
	for (; str[i] != '\0'; i++)
	{
		cp[i] = str[i];
	}
	cp[i] = '\0';
	return (cp);

}
