#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index
* of a linked list.
* @head: head of a list.
* @index: index of the list where the node is
* deleted.
*
* Return: 1 if it succeeded, -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *prev;
	listint_t *next;

	if (!*head)
		return (-1);

	prev = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(prev);
		return (1);
	}
	for (i = 0; i < index - 1 && prev->next; i++)
		prev = prev->next;
	if (!prev->next)
	{
		return (-1);
	}
	next = prev->next->next;
	free(prev->next);
	prev->next = next;
	return (1);
}
