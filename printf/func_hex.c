#include "main.h"
/*
 * dectoHex - converts to hex small letter
 *
 * @num - receives int
 *
 * Return: Length
 */
int dectoHexc(va_list arg)
{
	char hexa[200];
	int temp;
	int i = 0;
	int length;
	int num = va_arg(arg, int);

	while (num != 0)
	{
		temp = num % 16;
		if (temp < 10)
		{
			hexa[i] = temp + 48;
			i++;
		}
		else
		{
			hexa[i] = temp + 55;
			i++;
		}
		num = num / 16;
	}
	hexa[i] = '\0';
	length = i - 1;
	for (--i; i >= 0; i--)
	{
		_putchar(hexa[i]);
	}
	length = i - 1;
	return (length);
}
/**
 * dectoHEX - converts integer to hex cap
 *
 * @num: dec received
 *
 * Return: length
 */
int dectoHexs(va_list arg)
{
	char hexa[200];
	int temp;
	int i = 0;
	int length;
	int num = va_arg(arg, int);

	while (num != 0)
	{
		temp = num % 16;
		if (temp < 10)
		{
			hexa[i] = temp + 48;
			i++;
		}
		else
		{
			hexa[i] = 87 + temp;
			i++;
		}
		num = num / 16;
	}
	hexa[i] = '\0';
	length = i - 1;
	for (--i; i >= 0; i--)
	{
		_putchar(hexa[i]);
	}
	length = i - 1;
	return (length);
} 
