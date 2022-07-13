#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 *
 * @ip: takes string
 *
 * Return: pointer
 */
char *cap_string(char *ip)
{
	int i = 0;
	int m = 0;
	char sign[] = "}\n,;\t.!?\"(){ ";

	for (; ip[i] != '\0'; i++)
	{
		for (; m < 13; m++)
		{
			if (((ip[i] >= 'a') && (ip[i] <= 'z')) && (sign[m] == ip[i - 1]))
			{
				ip[i] = ip[i] - 32;
				break;
			}
		}
	}
	return (ip);
}
