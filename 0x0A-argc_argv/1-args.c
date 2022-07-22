#include <stdio.h>
/**
 * main- entry point
 *
 * @argc: takes int
 *
 * @argv: takes string
 *
 * Return: int
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
