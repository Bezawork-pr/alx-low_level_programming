#include <stdio.h>
#include "main.h"
/**
 * Print: alphabet one time
 *
 * return void
 */
void print_alphabet(void)
{
	char al = 'a';

	while (al < 'z')
	{
		putchar(al);
		al++;
	}
}
