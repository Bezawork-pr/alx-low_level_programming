#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints name
 *
 * @name: Takes name
 *
 * @f: Takes pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || f == NULL)
		return;
	f(name);
}
