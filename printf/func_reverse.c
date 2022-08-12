#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a strinG
 *
 * @s: takes strng
 *
 * Return: Void
 */
void rev_string(va_list arg)
{
	int i = 0;
	int count = 0;
	int m;
	char *s = va_arg(arg, char *);
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
/**
 * print_rev - Prints in reverse
 *
 * @s : takes strings
 *
 * Return: void
 */
void print_rev(va_list arg)
{
	int i = 0;
	int count = 0;
	char *s = va_arg(arg, char *);

	for (; s[i] != '\0'; i++)
	{
		count++;
	}
	count--;
	for (; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}

/**
 * reverse_array - reverses the content of array
 *
 * @a: Points to int
 *
 * @n: takes int
 *
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	n = n - 1;

	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}

