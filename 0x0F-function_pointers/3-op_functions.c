#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - performs addition
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Performs subtraction
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return: Substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - performs multiplication
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return: Multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - performs division
 *
 * @a: num1
 *
 * @b: num2
 *
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Return reminder
 *
 * @a: num1
 *
 * @b:num2
 *
 * Return: reminder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
