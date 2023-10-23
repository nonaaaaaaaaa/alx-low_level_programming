#include "lists.h"
#include <stdio.h>

/**
 * listint_len - unction that returns the number of elements
 * @h: pointer to head of nodes
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
