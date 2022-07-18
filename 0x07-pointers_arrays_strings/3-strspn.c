#include "main.h"
/**_strspn - gets the length of a prefix substring
 *
 * @s: takes string pointer
 *
 * @accept: takes string pointer
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;
	i = j = count = 0;

	while (accept[i] != '\0')
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				count++;
				break;
			}
		}
		i++;
	}
	return (count);
}
