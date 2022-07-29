#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * argc: Number of argument including function name
 *
 * argv: arguments name
 *
 * Return: multiplication
 */
int main(int argc, char *argv[])
{
	int mul, i, count, num1, num2;
	char error[] = "Error";

	count = 0;
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if ((isdigit(argv[1]) != '0') && num1 == 0)
	{
		printf("ERROR\n");
		exit(98);
		return (1);
	}
	if ((isdigit(argv[2]) != '0') && num2 == 0)
	{
		printf("Error\n");
		exit(98);
		return (1);
	}
	for (i = 0; i != '\0'; i++)
	{
		count++;
	}
	if (argc != 3)
	{
		for (i = 0; i <= count; i++)
		{
			_putchar(error[i]);
		}
		_putchar('\n');
		exit(98);
		return (1);
	}
	mul = num1 * num2;
	printf("%d\n", mul);
return (0);
}
