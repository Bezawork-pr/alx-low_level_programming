#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argc: Argument count including function name
 *
 * @argv: arguments
 *
 * Return: multiplication
 */
int main(int argc, char *argv[])
{
	int result, i, count, num1, num2;
	char error[] = "Error";
	int *mul;

	count = 0;
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if ((isdigit(argv[1]) != '0') && num1 == 0)
	{
		printf("ERROR\n");
		exit(98);
	}
	if ((isdigit(argv[2]) != '0') && num2 == 0)
	{
		printf("Error\n");
		exit(98);
	}
	mul = malloc(sizeof(int) * num1 * num2);
	if (mul == NULL)
	{
		exit(98);
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
	result = num1 * num2;
	mul =  &result;
	printf("%d\n", *mul);
return (0);
}
