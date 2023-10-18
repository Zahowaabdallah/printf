#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char ch);
int _strlen(char *str);
void print_char(char ch, int *count);
void print_string(char *str, int *count);
void print_integer(long int number, int *count);
void convertToRot13(char *str, int *count);
void print_reverse_string(char *str, int *count);
void find_conversion_specifier(char format, va_list list, int *count);
void print_binary(long int number, int *count);
void print_non_printable(char *str, int *count);
void print_unsigned_int(unsigned int number, int *count);
void print_octal(unsigned int number, int *count);
void print_lower_hexa(unsigned int number, int *count);
void print_upper_hexa(unsigned int number, int *count);
void print_address(void *address);

#endif
