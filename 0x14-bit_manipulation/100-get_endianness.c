#include "main.h"
/**
 * get_endianness - check  endianness.
 *use char to get first byte
 * Return: 0 if big endian,
 * 1 if little endian
 */
int get_endianness(void)
{
	int n = 1;
	char *c = (char *) &n;

	if (*c)
		return (1);
	return (0);
}
