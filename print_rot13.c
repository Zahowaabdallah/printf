#include "main.h"

/**
 * convertToRot13 - function
 * @str: input
 * @count: input
 * Return: void
 */

void convertToRot13(char *str, int *count)
{
	int i;
	int len;

	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
		{
			_putchar(str[i] + 13);
		}
		else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n'
			&& str[i] <= 'z'))
		{
			_putchar(str[i] - 13);
		}
		else
		{
			_putchar(str[i]);
		}
		(*count)++;
	}
}
