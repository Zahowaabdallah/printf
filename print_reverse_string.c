#include "main.h"

/**
 * print_reverse_string - prints a string in reverse order
 * @str: input
 * @count: num of chars printed
 * Return: void
 */
void print_reverse_string(char *str, int *count)
{
	int length;

	length = _strlen(str);
	length = length - 1;
	while (length >= 0)
	{
		_putchar(str[length]);
		length--;
		(*count)++;
	}
}
