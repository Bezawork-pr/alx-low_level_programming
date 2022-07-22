i#include "main.h"
/**
*  * _memset - fills memory with a constant byte
*   *
*    * @s: Takes string pointer
*     *
*      * @b: Takes constant string
*       *
*        * @n : Takes unsigned int
*         *
*          * Return: Pointer to char
*           */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

if (n > 0)
{
for (; i < n; i++)
{
s[i] = b;
}
}
return (s);
}
