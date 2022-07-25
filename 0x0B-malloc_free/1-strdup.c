#include "main.h"
#include <stdlib.h>
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
	cp = malloc(sizeof(*str));
	if (cp == NULL)
	{
		return (NULL);
	}
	for (; str[i] != '\0'; i++)
	{
		cp[i] = str[i];
	}
	return (cp);

}
