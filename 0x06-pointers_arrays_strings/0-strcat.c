#include "main.h"

/**
 * _strcat - concatenats two strings
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: pointer to resulting string destination
 */

char *_strcat(char *dest, char *src)
{
	int count = 0;

	while (*(dest + count))
	{
		count++;
	}
	while ((src))
	{
		*(dest + count) = *(src);
		count++;
		src++;
	}

	return (dest);
}
