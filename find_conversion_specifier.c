#include "main.h"

/**
 * find_conversion_specifier - handles
 * the differnet cases of format specifiers
 * in an organized manner
 * @format: input
 * @list: list of arguments
 * @count: num of chars printed
 * Return: void
 */

void find_conversion_specifier(char format, va_list list, int *count)
{
	switch (format)
	{
		case 'c':
			print_char(va_arg(list, int), count);
			break;
		case 's':
			print_string(va_arg(list, char*), count);
			break;
		case '%':
			print_char('%', count);
			break;
		case 'd':
		case 'i':
			print_integer(va_arg(list, int), count);
			break;
		case 'R':
			convertToRot13(va_arg(list, char*), count);
			break;
		case 'r':
			print_reverse_string(va_arg(list, char*), count);
			break;
		case 'b':
			print_binary(va_arg(list, int), count);
			break;
		case 'S':
			print_non_printable(va_arg(list, char*), count);
			break;
	}
}
