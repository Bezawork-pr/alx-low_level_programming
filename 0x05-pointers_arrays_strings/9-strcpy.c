#include "main.h"
#include <stdio.h>
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
