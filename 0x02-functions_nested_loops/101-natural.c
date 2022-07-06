#include <stdio.h>
#include "main.h"

/**
 * main - print multiple of 3 and 5 under 1024
 *
 * Return: void
 */

int main(void)
{
	int n = 0;
	int result = 0;
	for (; n < 1024; n++)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
		{
			result = result +n;
			
		}

	} 
	printf("%d",result);
	return (0);
}
