#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse a strinG
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
	char rev[1000];

	for (; s[i] != '\0'; i++)
	{
		count++;
	}
	count--;
	for (m = 0; count >= 0; count--)
	{
		rev[m] = s[count];
		rev[m + 1] = '\0';
		m++;
	}
	strcpy(s, rev);
}
