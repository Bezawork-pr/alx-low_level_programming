#include <stdio.h>
#include "main.h"
/**
 * add_comma - Add comma if not 98
 *
 * @n: takes int
 *
 * Return: void
 */
void add_comma(int n)
{
	if (n != 98)
	{
		printf(", ");
	}
	else
	{
		printf('\n');
	}
}

/**
 * print_to_98 -  prints all natural numbers from n to 98
 *
 * @n: takes int
 *
 * Return: void
 *
 */
void print_to_98(int n)
{
	if (n <= 98)
	{

		for (; n <= 98 ; n++)
		{
			printf("%d", n);
			add_comma(n);
		}
	}
	else
	{
		for (; n > 98 ; n--)
		{
			printf("%d", n);
			add_comma(n);
		}
	}
}
