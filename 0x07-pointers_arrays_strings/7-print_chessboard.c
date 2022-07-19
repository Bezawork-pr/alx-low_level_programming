#include "main.h"
/**
 * print_chessboard - Prints the chessboard
 *
 * @a:takes an array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = j = 0;
	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
