#include "main.h"

/**
 * _strchr - locates character in string
 *
 * @s: pointer to string where character is located
 * @c: character to be located
 *
 * Return: pointer to first occurence of c in s.
 *         NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	int counter = 0;
	char *p = s;

	while (p[i] >= '\0')
	{
		if (p[i] == c)
		{
			return (p + i);
		}

		i++;
	}

	return ('\0');
}
