#include "lists.h"
 /**
  * free_listint - free alinked list listint_t
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
