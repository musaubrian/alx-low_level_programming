#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 *
 * @s: segment where the bytes are gotten from
 * @accept: source of bytes used in s
 *
 * Return: number of bytes in s consisting of only those
 *         from accept
 */

unsigned int strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
		j = 0;
		while (accept[j])
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (i);
			}

			j++;
		}

		s++;
	}

	return (i);
}
