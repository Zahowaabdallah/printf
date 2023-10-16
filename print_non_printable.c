#include "main.h"

/**
 * hexa - converts an int
 * to hexadecimal
 * @a: input
 * Return: void
 */

void hexa(int a)
{
	if ((a / 16) > 0)
		hexa(a / 16);
	if ((a % 16) >= 10 && (a % 16) <= 15)
	{
		_putchar(48);
		_putchar(((a % 16) + 55));
	}
	else
	{
		_putchar(48);
		_putchar((a % 16) + 48);
	}
}

/**
 * print_non_printable - prints non
 * printable characters
 * @str: input
 * @count: input
 * Return: void
 */

void print_non_printable(char *str, int *count)
{
	if (str == NULL)
		str = "(null)";
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			_putchar('\\');
			_putchar('x');
			(*count) += 2;
			hexa(*str);
			str++;
		}
		_putchar(*str);
		str++;
		(*count)++;
	}
	str++;
	if((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
	{
        	_putchar('\\');
        	_putchar('x');
		_putchar('0');
		_putchar('0');
		(*count) += 4;
		print_non_printable(str, count);
	}
}
