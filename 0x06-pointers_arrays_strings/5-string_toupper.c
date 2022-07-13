#include "main.h"
/**
 * string_toupper - changes string to uppercase
 *
 * @ip: takes string
 *
 * Return: Point to string
 */
char *string_toupper(char *ip)
{
	int i = 0;

	for (; ip[i] != '\0'; i++)
	{
		if ((ip[i] >= 'a') && (ip[i] =< 'z'))
		{
			ip[i] = ip[i] - 32;
		}
	}
	return (ip);
}
