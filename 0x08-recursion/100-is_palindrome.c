#include "main.h"
#include <stdio.h>
/**
 * length - gets length
 *
 * @s:Takes string
 *
 * Return: Length
 */
int length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + length(s + 1));

}
/**
 * check_palindrome - checks if palindrome
 *
 * @initial: takes int
 *
 * @len: takes int
 *
 * @s: takes string
 *
 * Return: 1 if true,0 otherwise
 */
int check_palindrome(int initial, int len, char *s)
{
	if ((s[initial] == s[len]) && (len >= initial))
	{
		return (1 * check_palindrome(initial + 1, len - 1, s));
	}
	if (s[initial] != s[len])
	{
		return (0);
	}
		return (1);
}
/**
 * is_palindrome - Checks if string is palindrome
 *
 * @s: takes string
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	int r = check_palindrome(0, length(s) - 1, s);

	if (r == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
