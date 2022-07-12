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

	for (; s[i] != '\0'; i++)
	{
		if(s[i] < 48 || s[i] > 57)
		{
			continue;
		}
		else
		{
			if (((s[i] >= 48) || (s[i] <= 57)) && ((s[i + 1] < 48) || (s[i + 1] > 57)))
			{
				sum = sum * 10 + (s[i] - 48);
				countintchar++;
				break;
			}
			sum = sum * 10 + (s[i] - 48);
			countintchar++;	
		}
			
	}
	if (countintchar == 0)
	{
		return (0);
	}
	else
	{
		if ((s[0] == '-') && ((s[1] >= 48) && (s[1] <= 57)))
		{
			return (-sum);
		}
		return (sum);
	}
	
}
