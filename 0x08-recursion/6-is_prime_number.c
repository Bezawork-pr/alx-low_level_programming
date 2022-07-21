#include "main.h"
/**
 * test - checks divisibility other than 1
 *
 * @n: Takes int
 *
 * @index: takes int
 *
 * Return: returns int
 */
int test(int n, int index)
{
	if ((n % index == 0) && (n != index))
	{
		return (0);
	}
	if (index == n)
	{
		return (1);
	}
	return (test(n, index + 1));

}
/**
 * is_prime_number - returns 1 if primenumber otherwise 0
 *
 * @n: takes int
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (test(n, 2));

}
