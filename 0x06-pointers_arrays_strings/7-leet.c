#include "main.h"
/**
 * leet - a function that encodes to 1337
 *
 * @con: takes string
 *
 * return: pointer
 */
char *leet(char *rv)
{
	char ch[] = "aAeEoOtTlL";
	char pass[] = "4433007711";
	int i = 0;
	int m = 0;

	for (; rv[i] != '\0'; i++)
	{
		for (; ch[m] != '\0'; m++)
		{
			if(rv[i] == ch[m])
			{
				rv[i] = pass[m];  
			}
		}
	}
	return (rv);
}
