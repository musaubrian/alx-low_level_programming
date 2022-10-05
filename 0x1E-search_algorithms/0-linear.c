#include "search_algos.h"

/**
 * linear_search - searches for a match in an array using lineear serch algo
 *
 * @array: pointer to the array to search through
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where @value is
 *         -1 if array is NULL or value doesn't exist
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (value == array[idx])
			return (idx);
	}

	return (-1);
}
