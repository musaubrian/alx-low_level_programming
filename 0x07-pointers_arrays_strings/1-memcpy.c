#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest memory area
 *
 * @n: bytes to be copied
 * @src: memmory area to be copied from
 * @dest: momory area copied to
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
