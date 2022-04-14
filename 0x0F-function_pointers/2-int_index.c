#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: Array of integers.
 * @size: Size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: The index of the first element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int num;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (num = 0; num < size;num++)
	{
		if (cmp(array[num]) != 0)
			return (num);
	}

	return (-1);
}
