#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list
 * @head: pointer to list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *exe;

	while (head)
	{
		exe = head->next;
		free(head->str);
		free(head);
		head = exe;
	}
}
