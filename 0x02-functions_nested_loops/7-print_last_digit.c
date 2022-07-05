#include <stdio.h>
#include "main.h"
/**
* print_last_digit -a function that prints the last digit of a number
*
* @n: takes signed integer
*
* Return: The last digit
*/
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
	ld = (-1) * ld;

	}

	_putchar(ld + '0');
	return (ld);
}
