#include "main.h"
#include <stdio.h>
/**
 * _strcat- concats two string
 *
 * @dest: Takes string
 *
 * @char: takes string
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
