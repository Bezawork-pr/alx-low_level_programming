#include <stdio.h>
#include "main.h"
/**
* * _abs - computes the absolute value of an integer
* *
* * @n: takes signed integer
* *
* * Return: Absolute value
* */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
int s = (-1) * n;

return (s);
}
}
