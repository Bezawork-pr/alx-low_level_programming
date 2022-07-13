#include "main.h"
/**
 * _strcmp - compares two strings.
 *
 * @s1: takes string
 *
 * @s2: takes string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, comp;

	i = comp = 0;


	for (; (s1[i] != '\0') && (comp == 0); i++)
	{
		comp = s1[i] - s2[i];
	}
	return (comp);
}
