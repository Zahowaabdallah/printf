#include "main.h"

/**
 * _printf - custom printf function
 * @format: input
 * Return: num of chars printed
 */

int _printf(const char *format, ...)
{
	int i;
	int count;
	va_list list;

	i = 0, count = 0;
	va_start(list, format);

	if (format == NULL)
		return (-1);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '\0')
		{
			_putchar('%');
			count++;
			return (1);
		}
		else if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			find_conversion_specifier(format[i], list, &count);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(list);
	return (count);
}
