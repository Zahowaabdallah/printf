#include "main.h"

/**
 * print_lower_hexa - function
 * @number: input
 * @count: input
 * Return: void
 */

void print_lower_hexa(unsigned int number, int *count)
{
	if ((number / 16) > 0)
		print_lower_hexa((number / 16), count);
	if ((number % 16) >= 10 && (number % 16) <= 15)
	{
		_putchar(((number % 16) + 87));
		(*count)++;
	}
	else
	{
		_putchar((number % 16) + 48);
		(*count)++;
	}
}
