#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow -split string in to two
 *
 * @str: Takes string
 * 
 * Return: pointer or NULL if str is NULL or NULL if fail
 */
char **strtow(char *str)
{
	char **split;
	long unsigned int i, k;
	int count = 0;

	i = k = 0;
	if ((str == NULL) || (str == 0))
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	count = count + 2;
	split = malloc(count);
	if (split == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == ' ') || (str[i] == '\t'))
		{
			split[i][k] = '\n';
			k++;	
		}
		split[i][k] = str[i];
	}
	split[i][k] = '\0'; 

	return (split);
	
}
