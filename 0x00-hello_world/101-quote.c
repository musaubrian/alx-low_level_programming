#include <unistd.h>
#include <string.h>

/**
 * main - prints string without using printf() or puts(),
 * followed by a new file
 * Return: 0
 */

int main(void)
{
	char *p = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, p, strlen(phrase));

	return (0);
}
