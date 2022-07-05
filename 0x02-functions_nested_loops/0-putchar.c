#include <stdio.h>
#include "main.h"
/**
 *main-Entry point
 *Return: Always 0
 */

int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	putchar('\n');
	return (0);
}
