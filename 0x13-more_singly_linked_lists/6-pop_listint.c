#include "lists.h"
/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int A;

	listint_t *new_h;

	if (!*head)
		return (0);
	new_h = *head;
	A = new_h->n;
	*head = new_h->next;
	free(new_h);
	return (A);
}
