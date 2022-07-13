#include "main.h"
/**
 * pow - makes the power of n
 *
 * @a: takes int
 *
 * @n: takes int
 *
 * Return: int
 */
int powan(int a, int n)
{
	int i = 0;
	int number  = 1;

	for (; n > i; i++)
	{
		number *= a;
	}
	return (number);
}
/**
 * comp - compares length
 *
 * @s1: takes string
 *
 * @s2: takes string
 *
 * Return: int
 */
int comp(char *s1, char *s2)
{
	int i = 0;
	int m = 0;
	int c1 = 0;
	int c2 = 0;
	int result;

	for (; s1[i] != '\0'; i++)
	{
		c1++;
	}
	for (; s2[m] != '\0'; m++ )
	{
		c2++;
	}
	if (c1 > c2)
	{
		result = 1;
	}
	else if (c2 > c1)
	{
		result = -1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
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
	int size = comp(s1, s2);
	int i = 0;
	int count = 0;
	int tmp = count;
	int n = 0;
	int total;
	int m;

	for (; (s1[i] != '\0') && (s2[i] != '\0'); i++)
	{
		count++;
	}
	while (tmp != 0)
	{
		tmp = tmp / 10;
		n++;
	}
	m = powan(10,n + 1);
	total = size * m;
	if(total == 0)
	{
		return (0);
	}
	else if (total < 0)
	{
		total = -total;
		total = -(total + count);
		return (total);
	}
	else
	{
		total = total + count;
		return (total);
	}
}
