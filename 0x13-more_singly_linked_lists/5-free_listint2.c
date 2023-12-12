#include "lists.h"
/**
* free_listint2 - frees a linked list
* @head: head of a list.
*/
void free_listint2(listint_t **head)
{
	listint_t *tempv;

	if (head == NULL)
		return;

	while (*head)
	{
		tempv = (*head)->next;
		free(*head);
		*head = tempv;
	}
	*head = NULL;
}
