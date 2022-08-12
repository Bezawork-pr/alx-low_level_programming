#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H

#include <stdarg.h>
#include <stdlib.h>
/**
 * struct p - assoisates character with write print
 *
 * @sp : the symbot to identify which print to perform
 *
 * @f: function to be exectuted based on sp
 */
typedef struct p
{
	char *sp;
	int (*f)(va_list);
} p;
int _printf(const char *format, ...);
int (*get_sp_func(char c))(va_list);
int _print_integer(va_list arg);
int _print_unsignedint(va_list arg);
int _print_string(va_list arg);
int _print_char(va_list arg);
int _print_hexs(va_list arg);
int _print_hexc(va_list arg);
int _print_binary(va_list arg);
int _print_octal(va_list arg);
int _print_rot13(va_list arg);
char *rev_string(char *s);
int _print_rev(va_list arg);
int _putchar(char c);
#endif /* PRINTF_MAIN_H */
