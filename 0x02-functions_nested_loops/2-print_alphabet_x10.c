#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
*
* Return: Always 0
*/
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char al = 'a';

		while (al <= 'z')
		{
			putchar(al);
			al++;
		}
		i++;
	putchar('\n');
	}
}
