#include "main.h"

/**
 * _islower - Checks if c id lowercase or not
 * @c: character to be checked.
 *
 * Return: 1 if character is lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
