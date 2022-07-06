#include "main.h"
#include "0-positive_or_negative.c"

/**
 * main - checks if negative or positive
 *
 * Return: void
 *
 */ 

int main(void)
{
	int i;

	i = 98;
	positive_or_negative(i);
	i = (-5);
	positive_or_negative(i);

	return (0);
}
