#include "main.h"
/**
 * print_positive_binary - prints the binary representation of a positive number
 * @number: the positive number to print
 * @count: a pointer to the count of printed characters
 * Return: void
 */
void print_positive_binary(int number, int *count)
{
	int temp = 1;
	max = 1;

	if (number == 0)
	{
		_putchar(0);
		(*count)++;
		return;
	}
	if (number < 0)
	{
	while (max <= number)
	{
		max = max * 2;
	}
	max = max / 2;
	temp = max;

	while (max > 0)
	{
		if (temp <= number)
		{
			_putchar(1);
			number = number - temp;
			(*count)++;
		}
		else
		{
			_putchar(0);
			(*count)++;
		}
		max = max / 2;
		temp = temp / 2;
	}
}

/**
 * print_binary - print the binary representation of a number
 * @number: the number to print
 * @count: a pointer to the count of printed characters
 */
void print_binary(int number, int *count)
{
	int i;
	if (number < 0)
	{
		number = -number;
		for (i = 0; i < 24; i++)
		{
			_putchar('1');
			(*count)++;
		}
	}
	print_positive_binary(number, count);
}
