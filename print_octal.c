#include "main.h"

/**
 * print_lower_hexa - function
 * @number: input
 * @count: input
 * Return: void
 */

void print_octal(unsigned int number, int *count)
{
	if ((number / 8) > 0)
		print_octal((number / 8), (int *)count);
	_putchar((number % 8) + 48);
	(*count)++;
}
