#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

 /**
  * free_listint - function that frees a listint_t list
  * Description: this function is used for freeing alinked list
  * it sets the head pointer to empty the list
  * @head: apointer to the start list
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
