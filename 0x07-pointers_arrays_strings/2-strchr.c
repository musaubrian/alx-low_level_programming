#include "main.h"

/**
 * _strchr - Locates character in string.
 *
 * @s: Pointer to string where character is located from.
 * @c: Character to be located.
 *
 * Return: Pointer to first occurrence of @c in @s,
 *	   NULL if character is not found.
 */
char *_strchr(char *s, char c)
{
	int count = 0;
	char *p = s;

	while (p[count] >= '\0')
	{
		if (p[count] == c)
		{
			return (p + count);
		}
		count++;
	}
	return ('\0');
}
