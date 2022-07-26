#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: Takes int
 *
 * @av: Takes double pointer
 *
 * Return: Pointer or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *re;
	int i, j, k, count;

	i = j = k = count = 0;
	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}
	count++;
	re = malloc(sizeof(char) * count);
	if (re == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{

			re[k] = av[i][j];
			k++;
		}
		re[k] = '\n';
	       k++;

	}
	re[k] = '\0';
	return (re);
}
