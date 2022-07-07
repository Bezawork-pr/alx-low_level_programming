#include <stdio.h>
#include "main.h"
/**
 * valmondat- checks if days in months are valid
 *
 * @month: takes int
 *
 * @date: takes int
 *
 * Return: int
 */ 
int valmondat(int month, int day)
{
	if(month == 4 || month == 6 || month == 9 || month == 11)
	{
		if ((day <= 30) && (day > 0))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else if (month == 2)
	{
		if ((day <=29) && (day > 0))
		{
			return (1);
		}
		else 
		{
			return (0);
		}
	}
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 12 || month == 10) 
	{
		if ((day <= 31) && (day > 0))
		{
			return (1);
		}
		else
		{
			return (0);
		}
				       
	}
	return (0);
}
/**
* * print_remaining_days - takes a date and prints how many days are
* * left in the year, taking leap years into account
* * @month: month in number format
* * @day: day of month
* * @year: year
* * Return: void
* */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0) && (valmondat(month, day) == 1))
	{
		if (month >= 2 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (valmondat(month, day) == 1)
		{
			if (month == 2 && day == 60)
			{
				printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
			}
			else
			{
				printf("Day of the year: %d\n", day);
				printf("Remaining days: %d\n", 365 - day);
			}
		}
		else
		{
			 printf("Invalid date\n");
		}
	}
}

