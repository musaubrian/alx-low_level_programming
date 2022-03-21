#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_rev - Prints a string in reverse.
 *
 * @s: Set of characters
 *
 */

void print_rev(char *s)
{
	int l;
	int i;

	l = _strlen(s);
	i = l;

	while (i > 0)
	{
		i--;
		_putchar(*(s + i));
	}
	_putchar('\n');
}
