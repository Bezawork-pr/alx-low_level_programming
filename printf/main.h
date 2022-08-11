#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H

#include <stdarg.h>
#include <stdlib.h>
/**
 * struct p - assoisates character with write print
 *
 * @sp : the symbot to identify which print to perform
 *
 * @f: function to be exectuted based on sym
 */
typedef struct p
{
	char *sp;
	int (*f)(va_list);
} p;
int _printf(const char *format, ...);
int (*get_sp_func(char *s))(va_list arg);
int _print_integer(va_list arg);
unsigned int _print_unsignedint(va_list arg);
int _print_string(va_list arg);
int _print_char(va_list arg);
int dectoHexs(va_list arg);
int dectoHexc(va_list arg);
int decToBinary(va_list arg);
char *rot13(va_list arg);
void rev_string(va_list arg);
void print_rev(va_list arg);
void reverse_array(int *a, int n);
int _putchar(char c);
#endif /* PRINTF_MAIN_H */
