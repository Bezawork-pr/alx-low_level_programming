#include <stdio.h>
/**
 * main - entry point
 *
 * @argc: Takes int
 *
 * @argv: Takes string
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

