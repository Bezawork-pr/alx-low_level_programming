#include <stdio.h>
#include "main.h"
/**
 * monthday - Checks validity of month and date
 *
 * @month: takes int
 *
 * @day: takes int
 *
 * Return: 1 if success and -1 if fail
 */
int monthday(int month, int day)
{
	if (((month >= 1) && (month <= 12)) && ((day >= 1) && (day <= 31)))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int result = monthday(month, day);
	printf("%d", result);

	if (((year % 4 == 0 || year % 400 == 0) && (year % 100 == 0)) && (result == 1))
	{
		if (month == 2 && day == 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else if (result != 1)
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
		else
		{
			printf("Invalid date or month");
		}
	}
}
