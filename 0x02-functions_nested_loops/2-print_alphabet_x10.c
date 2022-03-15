#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char a;

	while (i <= 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}

		_putchar('\n');
		i++;
	}
}
