#include "search_algos.h"

/**
 * print_array - prints the array
 *
 * @array: array to print
 * @left: left half of the array
 * @right: right half of the array
 */

void print_array(int *array, size_t left, size_t right)
{
    size_t idx;

    printf("Searching in array: ");

    for (idx = left; idx < right; ++idx)
    {
        printf("%d",array[idx]);
        if (idx == (right - 1))
            break;

        printf(", ");
    }
    printf("\n");
}


/**
 * binary_search - searches for @value in @array using binary search
 *
 * @array: pointer to first element of the array
 * @size: number of elements in an array
 * @value: value to search for
 *
 * Return: index where value is located
 *         -1 if array is empty or value dosn't exist
 */

int binary_search(int *array, size_t size, int value)
{
    int left = 0;
    int right = size - 1;
    int mid;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        print_array(array, left, right + 1);
        mid = (left + right) / 2;
        if (value > array[mid])
            left = mid + 1;
        else if (value < array[mid])
            right = mid - 1;
        else
            return (mid);
    }

    return (-1);
}
