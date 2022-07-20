#include "main.h"
/**
 * test - Test to find square root
 *
 * @n: takes int
 *
 * @index: takes int
 *
 * Return: int
 */
int test(int n, int index)
{
	if (index >= n)
	{
		return (-1);
	}
	if ((index % (n / index) == 0) && (n % index == 0))
	{
		return (index);
	}
	if (index >= n)
	{
		return (-1);
	}
	return (test(n, index + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: Takes int
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (test(n, 2));
}
