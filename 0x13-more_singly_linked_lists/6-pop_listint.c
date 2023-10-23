#include "lists.h"

/**
 * pop_listint - function that deletes
 * the head node of a listint_t linked list
 * @head: pointer to start list
 * Return: head node’s data (n), the linked list is empty return 0
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int rev;

	if (*head == NULL)
		return (0);

	tmp = *head;
	rev = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (rev);
}
