#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: takes Int
 *
 * @y: takes Int
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	printf("what is going on :xxxx%d.....yyyyyyy%d\n", x, y);
	return (x * _pow_recursion(x, y - 1));
}
