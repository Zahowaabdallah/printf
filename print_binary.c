#include "main.h"
/**
 * print_binary - prints the binary number equivalent for integer numbers
 * @number: input
 * @count: input
 * Return: void
 */
void print_binary(int number, int *count)
{
	int max;
	int temp;

	max = 1;
	if (number == 0)
	{
		_putchar(48);
		(*count)++;
		return;
	}
	if (number < 0)
	{
		_putchar(49);
		(*count)++;
		number = -number;
	}
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
			_putchar(49);
			number = number - temp;
			(*count)++;
		}
		else
		{
			_putchar(48);
			(*count)++;
		}
		max = max / 2;
		temp = temp / 2;
	}
}
