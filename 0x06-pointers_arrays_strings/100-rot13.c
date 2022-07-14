#include "main.h"
/**
 * rot13 - encodes a string
 *
 * @rv: Takes string
 *
 * Return: pointer
 */
char *rot13(char *rv)
{
	int i = 0;

	for (; rv[i] != '\0'; i++)
	{
		if ((rv[i] >= 'a') && (rv[i] <= 'm'))
		{
			rv[i] = rv[i] + 13;
		}
		else if ((rv[i] >= 'n') && (rv[i] <= 'z'))
		{
			rv[i] = rv[i] - 13;
		}
		else if ((rv[i] >= 'A') && (rv[i] <= 'M'))
		{
			rv[i] = rv[i] + 13;
		}
		else if ((rv[i] >= 'N') && (rv[i] <= 'Z'))
		{
			rv[i] = rv[i] - 13;
		}
		else
		{
			rv[i] = rv[i];
		}
	}
	return (rv);
}
