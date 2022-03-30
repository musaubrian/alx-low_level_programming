#include "main.h"

/**
 * _sqrt_recursion - find square root of @n
 * @n: value being square rooted
 * Return: square root @n,
 *        -1 if n doesnot hav a natural root
 */

int find_root(int s, int r)
{
	if ((r * r) == s)
	{
		return (r);
	}
	else if (r == s / 2)
	{
		return (-1);
	}

	return (find_root(s, r + 1));
}

int _sqrt_recursion(int n)
{
	int base = 0;

	if (n <= 0)
	{
		return (-1);
	}
	esle if (n == 1)
	{
		return (1);
	}
	return (find_sqrt(n, base));
}
