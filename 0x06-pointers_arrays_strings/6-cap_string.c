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
	int m;
	char sign[] = ",;.!?(){}\n\t\" ";

	while (ip[i] != '\0')
	{
		for (m = 0; sign[m] != '\0'; m++)
		{
			if (((ip[i] >= 'a') && (ip[i] <= 'z')) && (ip[i - 1] == sign[m]))
			{
				ip[i] = ip[i] - 32;
			}
			else
			{
				ip[i] = ip[i];
			}
		}
		i++;
	}
	return (ip);
}
