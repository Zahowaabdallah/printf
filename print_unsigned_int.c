#include "main.h"
#include <stdlib.h>

/**
 * print_unsigned_int - prints an
 * unsigned intger by
 * converting it to a string
 * @number: input
 * @count: input
 * Return: void.
 */

void print_unsigned_int(unsigned int number, int *count)
{
	int i, j;
	unsigned long int copy, copy2;
	char *str;

	i = 1;
	copy = number;
	copy2 = number;
	/*how many digits in a number */
	while (copy / 10 != 0)
	{
		i++;
		copy = copy / 10;
	}
	str = malloc((sizeof(char) * i) + 1);
	j = i;
	str[j] = '\0';
	j = i - 1;
	while (j >= 0)
	{
		str[j] = (char)(copy2 % 10 + '0');
		copy2 = copy2 / 10;
		j--;
	}
	print_string(str, count);
	free(str);
}
