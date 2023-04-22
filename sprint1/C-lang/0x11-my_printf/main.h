#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#ifndef MAIN_H
#define MAIN_H
#define BUFFER 1024

/**
 * funcS - structure for functions
 * @placeholder: format specifier
 * @f: function to call
 */

typedef struct funcS
{
	char placeholder;
	int (*f)(va_list, int);
} func;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_func_print(char))(va_list, int);
int print_char(va_list, int);
int print_string(va_list, int);
int print_int(va_list, int);
int print_binary(va_list, int);
int print_unsigned(va_list, int);
int print_octal(va_list, int);
int print_hex(va_list, int);
int print_Hex(va_list, int);
int print_non_printable(va_list, int);
int print_pointer(va_list, int);
int print_reverse(va_list, int);
int print_Rot13(va_list, int);
int print_num(unsigned long int, unsigned long int, int, const char *);
int print_digit(int, unsigned long int, int, const char *);

#endif /* MAIN_ */
