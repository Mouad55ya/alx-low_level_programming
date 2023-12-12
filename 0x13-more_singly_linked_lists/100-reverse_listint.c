#include "lists.h"

/**
* reverse_listint - reverses a linked list.
* @head: head of a list.
*
* Return: to  pointer
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *t;
	listint_t *a;

	t = NULL;
	a = NULL;

	while (*head != NULL)
	{
		a = (*head)->next;
		(*head)->next = t;
		t = *head;
		*head = a;
	}

	*head = t;
	return (*head);
}
