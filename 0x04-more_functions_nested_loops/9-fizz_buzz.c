#include <stdio.h>
/**
 * fizzbuzz - Print 1 - 100 & n % 3 == 0; fizz & n % 5 == 0 Buzz; both fizzbuzz
 *
 * Return: void
 */
void fizzbuzz(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if ((i % 3 == 0) && !(i % 5 == 0))
		{
			printf("Fizz ");
		}
		else if (!(i % 3 == 0) && (i % 5 == 0))
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d", i);
		}
	}	
}
