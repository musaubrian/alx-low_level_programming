#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 *
 * Return: string length
 */

void print_rev(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}

	return (length);
}
