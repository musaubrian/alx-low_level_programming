#include "lists.h"

/**
 * dlistint_len - Return number of elements in a linked list
 *
 * @h: The linked list.
 *
 * Return: Number of elemets in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}

	return (length);
}
