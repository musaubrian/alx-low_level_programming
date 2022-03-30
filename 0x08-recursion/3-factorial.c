#include "main.h"

/**
 * factorial - returns factorial of a number
 *
 * @n: the value being factorized
 *
 * Return: factorial of @n,
 *         -1 if n is less than 0,
 *         1 if n equals 0
 */

int factorial(int n)
{
	int base = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	base = n * factorial(n - 1);

	return (base);
}
