#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: takes Int
 *
 * @y: takes Int
 *
 * Return: int
 */
unsigned int _pow_recursion(unsigned int x, unsigned int y)
{
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
/**
 * binary_to_uint - converts binary
 * number to an unsigned int
 *
 * @b: binary
 *
 * Return: converted number
 * or 0 if binary received
 * is not binary or
 * if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, sum = 0, j = 0, pow, conv;
	int copy;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if ((b[i] > '1') || (b[i] < '0'))
			return (0);
		i++;
	}
	i--;
	copy = i;
	while (copy >= 0)
	{
		pow = _pow_recursion(2, j);
		conv = b[i] - '0';
		sum += conv * pow;
		j++;
		i--;
		copy--;
	}
	return (sum);
}
