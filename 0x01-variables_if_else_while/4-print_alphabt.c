#include <stdio.h>

/**
 * main - Prints alphabet except 'e' & 'q'
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if ((a != 'e') && (a != 'q'))
		{
			putchar(a);
		}
	}

	putchar('\n');

	return (0);
}
