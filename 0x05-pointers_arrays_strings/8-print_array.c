#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an input number of elements
 *               of an array of integers.
 *
 * @a: An array of integers.
 *
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
	{
		printf("%d", a[arr]);

		if (arr == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
