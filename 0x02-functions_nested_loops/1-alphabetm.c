#include <stdio.h>
#include "main.h"
/**
 *main-Entry point
 *Return: Always 0
 */

int main(void)
{
	print_alphabet_x10();
	putchar('\n');
	return (0);
}

print_alphabet_x10()
{
	int i = 0;

	while (i < 10)
	{ 
		char al = 'a'
		while (al < 'z')
		{
			putchar(al);
			al++;
		}
		i++;
	}

}
