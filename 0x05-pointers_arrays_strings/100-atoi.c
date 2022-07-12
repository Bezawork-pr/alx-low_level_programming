#include "main.h"
/**
 * _atoi - convert a string to an integer.
 *
 * @s: takes string
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0;
	int sum = 0;
	int countintchar = 0;
	int sign = 1;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] < 48 || s[i] > 57)
		{
			continue;
		}
		else
		{
			for (; (s[i] >= 48) && (s[i] <= 57); i++)
			{
				sum = sum * 10 + (s[i] - 48);
				countintchar++;
			}
			break;
		}
	}
	if (countintchar == 0)
	{
		return (0);
	}
	return (sum * sign);
}
