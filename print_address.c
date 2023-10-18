#include "main.h"

/**
 * print_address - prints the address in
 * memory for variables from
 * any data type
 * @address: void pointer to the address
 * @count: number of characters printed
 * Return: void
 */

void print_address(void *address, int *count)
{
	_putchar('0');
	_putchar('x');
	print_lower_hexa((unsigned long int) address, count);
}
