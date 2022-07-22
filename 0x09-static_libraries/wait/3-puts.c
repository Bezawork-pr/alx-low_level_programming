#include "main.h"
/**
*  * _puts - hat prints a string, followed by a new line,
*   *
*    * @str : string
*     *
*      * Return: void
*       */
void _puts(char *str)
{
int i = 0;

for (; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

