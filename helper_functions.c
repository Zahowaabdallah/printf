#include "main.h"

/**
 * _strlen - counts the length of a string
 * @str: input
 * Return: int
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
