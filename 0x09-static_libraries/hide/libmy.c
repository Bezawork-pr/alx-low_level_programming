#include <unistd.h>
#include "main.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
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
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	for (; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
int count(char *s)
{
	int m = 0;
	int count = 0;

	for (; s[m] != '\0'; m++)
	{
		count++;
	}
	return (count);
}
/**
 * puts2 -prints every other character of a string
 *
 * @str: takes string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		dest[i + 1] = '\0';
	}
	return (dest);
}
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
	if (sign == (-1))
	{
		return (-sum);
	}
	return (sum);
}
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int m = 0;
	int count = 0;

	for (; dest[i] != '\0'; i++)
	{
		count++;
	}
	for (; src[m] != '\0'; m++)
	{
		dest[count] = src[m];
		count++;
	}
	return (dest);
}
char *_strncat(char *dest, char *src, int n)
{
	int i, m, count;

	i = m = count = 0;
	for (; dest[i] != '\0'; i++)
	{
		count++;
	}
	for (; (m < n) && (src[m] != '\0') ; m++)
	{
		dest[count] = src[m];
		count++;
	}
	return (dest);
}
char *_strncpy(char *dest, char *src, int n)
{
	int i, count;

	i = count = 0;
	for (; (src[i] != '\0') && (i < n); i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
int _strcmp(char *s1, char *s2)
{
	int i, comp;

	i = comp = 0;


	for (; (s1[i] != '\0') && (comp == 0); i++)
	{
		comp = s1[i] - s2[i];
	}
	return (comp);
}
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
char *_strchr(char *s, char c)
{
	int i = 0;
	int count = 0;
	char *temp;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			temp = &s[i];
			count = 1;
			break;
		}
	}
	if (count == 0)
	{
		temp = '\0';
	}
	return (temp);
}
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	i = j = count = 0;

	while (accept[i] != '\0')
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == ' ')
			{
				break;
			}
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
char *_strpbrk(char *s, char *accept)
{
	int i, j, count;
	char *re;

	i = count = 0;
	for (; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if ((count == 0) || (count > j))
				{
					count = j;
				}
				re = &s[count];
			}
		}
	}
	if (count == 0)
	{
		re = '\0';
	}
	return (re);
}
char *_strstr(char *haystack, char *needle)
{
	int i, j, countt, lengthn, star;
	char *re;

	i = lengthn = countt = star = 0;
	for (; needle[i] != '\0'; i++)
	{
		lengthn++;
	}
	for (j = 0; haystack[j] != '\0'; j++)
	{
		if (needle[0] == haystack[j])
		{
			star = j;
			re = &haystack[star];
			for (i = 0; needle[i] != '\0'; i++)
			{
				if (needle[i] == haystack[j + i])
				{
					countt++;
					break;
				}
				else
				{
					countt--;
					break;
				}
			}
		}
	}

	if (countt == 0)
	{
		re = '\0';
	}
	if (lengthn == 0)
	{
		re = &haystack[0];
	}
	return (re);
}
 





