#include <stdio.h>
#include <stdlib.h>
/**
 * change - counts change
 *
 * @coin: takes int
 *
 * Return: int
 */
int change(int coin)
{
	int count = 0;

	while (coin > 0)
	{
		if (coin >= 25)
		{
			coin = coin - 25;
			count++;
		}
		else if ((coin < 25) && (coin >= 10))
		{
			coin = coin - 10;
			count++;
		}
		else if ((coin < 10) && (coin >= 5))
		{
			coin = coin - 5;
			count++;
		}
		else if ((coin < 5) && (coin >= 2))
		{
			coin = coin - 2;
			count++;
		}
		else if ((coin < 2) && (coin >= 1))
		{
			coin = coin - 1;
			count++;
		}
	}
	return (count);
}
/**
 * main - entry point
 *
 * @argc: takes int
 *
 * @argc: Takes string
 *
 * Return: return int
 */
int main(int argc, char *argv[])
{
	int coin;
	int count;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	coin = atoi(argv[1]);

	if (coin >= 0)
	{
		count = change(coin);
	}
	printf("%d\n", count);
	return (0);
}
