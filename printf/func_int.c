#include "main.h"
/**
 * _print_integer - Prints integer
 *
 * @num: recieves int to be printed
 *
 * Return: 0 on SUCESS
 */
int _print_integer(va_list arg)
{
	int num, place, printed_char;
	unsigned int n;

	num = va_arg(arg, int);
	printed_char = 0;
	place = 1;
	if (num < 0)
	{
		_putchar('-');
		n = num * -1;
		printed_char++;
	}
	else
		n = num;

	while ((n / place) > 9)
	{
		place = place * 10;
	}

	while (place >= 1)
	{
		_putchar((n / place) + '0');
		n %= place;
		place /= 10;
		printed_char++;
	}
	return (printed_char);

}
/**
 * _print_unsignedint - print Unsigned int
 *
 * @num: Unsigned int
 *
 * Return: 0 on SUCESS
 */
int _print_unsignedint(va_list arg)
{
	unsigned int num, place;                                                                                           
        unsigned int printed_char;                                                                                                         
                                                                                                                                
        num = va_arg(arg,unsigned int);                                                                                                 
        printed_char = 0;                                                                                                       
        place = 1;                                                                                                              
                                                                                                                                
        while ((num / place) > 9)                                                                                                 
        {                                                                                                                       
                place = place * 10;                                                                                             
        }                                                                                                                       
                                                                                                                                
        while (place >= 1)                                                                                                      
        {                                                                                                                       
                _putchar((num / place) + '0');                                                                                    
                num %= place;                                                                                                     
                place /= 10;                                                                                                    
                printed_char++;                                                                                                 
        }                                                                                                                       
        return (printed_char);    
}
