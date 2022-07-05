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

	_putchar(ld);
	return (ld);
}
