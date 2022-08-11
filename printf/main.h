#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H

#include <stdarg.h>
#include <stdlib.h>
/**
 * struct locate - assoisates character with write print
 *
 * @sym : the symbot to identify which print to perform
 *
 * @f: function to be exectuted based on sym
 */
typedef struct locate
{
	char *sym;
	int (*f)(va_list);
} locate;
int _printf(const char *format, ...);
int _print_integer(va_list num);
unsigned int _print_unsignedint(va_list num);
int _print_string(va_list s);
int _print_char(va_list c);
int dectoHexs(va_list num);
int dectoHexc(va_list num);
int decToBinary(va_list num);
char *rot13(va_list str);
void rev_string(va_list s);
void print_rev(va_list s);
void reverse_array(int *a, int n);
int _putchar(char c);
#endif /* PRINTF_MAIN_H */
