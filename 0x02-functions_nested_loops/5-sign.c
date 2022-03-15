#include "main.h"

/**
 * print_sign - prints sign of the number positive or negative
 * @n: number being checked
 *
 * Return: 1 if greater than zero, 0 if is zero and -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(n);

		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		_putchar(n);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(n);
		return (-1);
	}
}
