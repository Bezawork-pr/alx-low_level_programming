#include <stdio.h>
#include "main.h"
/**
* print_sign - Prints the sign of a number
*
* @n: takes signed integer
*
* Return: 1 if int n is positive, 0 if zero, otherwise -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
	putchar('+' + '0');
	return (1);
	}
	else if (n == 0)
	{
	putchar(0);
	return (0);
	}
	else
	{
	putchar('-' + '0');
	return (-1);
	}
}
