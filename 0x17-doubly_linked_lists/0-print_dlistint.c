#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{

	int countup = 0;

	if (h == NULL)
		return (countup);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		countup++;
	}

	return (countup);
}
