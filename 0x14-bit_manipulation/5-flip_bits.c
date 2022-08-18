#include "main.h"
/**
 * flip_bits - number of flips to get number m
 *
 * @n: Number A
 *
 * @m: Number B
 *
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff = 0;
	int i;

	for (i = 31; i >= 0; i--)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			diff++;
	}
	return (diff);

}
