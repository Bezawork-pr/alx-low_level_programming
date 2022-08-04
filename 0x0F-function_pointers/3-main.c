#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - entry point
 * exit(100) -> if division or module with base 0
 * exit(98) -> if argc not equal to 4
 * exit(99) -> if cant find operator
 * @argc: argument count
 *
 * @argv: argument element
 *
 * Return:int
 */
int main(int argc, char *argv[])
{
	int (*com)(int, int);
	int num1;
	int num2;
	int calc;
	char *get_op;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	get_op = argv[2];
	if (((strcmp(get_op, "/") == 0) || (strcmp(get_op, "%") == 0)) && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	com = get_op_func(get_op);
	if (com == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	calc = com(num1, num2);
	printf("%d\n", calc);
	return (0);
}
