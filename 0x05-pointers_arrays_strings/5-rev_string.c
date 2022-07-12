#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse a string
 *
 * @s: takes strng
 *
 * Return: Void
 */
void rev_string(char *s)
{
	int i = 0;
	int count = 0;
	int m;
	char rev[9];

	for (; s[i] != '\0'; i++)
	{
		count++;
	}
	count--;
	for (m = 0; count >= 0; count--)
	{
		rev[m] = s[count];
		m++;
	}
	strcpy(s, rev);
}
