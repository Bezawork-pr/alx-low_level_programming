#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concates two strings
 *
 * @s1: Takes string
 *
 * @s2: takes string
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, count;
	char *con;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = j = count = 0;
	con = malloc(sizeof(*con) * (strlen(s1) + (strlen(s2) + 1)));
	if (con == NULL)
	{
		return (NULL);
	}
	for (; s1[i] != '\0'; i++)
	{
		con[i] = s1[i];
		count++;
	}
	for (; s2[j] != '\0'; j++)
	{
		con[count] = s2[j];
		count++;
	}
	con[count + 1] = '\0';
	return (con);
}
