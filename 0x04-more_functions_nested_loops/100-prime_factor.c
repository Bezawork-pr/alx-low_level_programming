#include <stdio.h>
/**
 * main - Find the largest prime of a composite number
 *
 * Return: largest prime of composite number
 */
int main(void)
{
	long num = 612852475143;
	long count = 2;

	for (; num > count; count++)
	{
		while ((num % count) == 0)
		{
			num = num / count;
		}
	}
	printf("%li", num);
	printf("\n");
	return (0);
}
