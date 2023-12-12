#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *next;

	while (head != NULL)
	{
		temp = head;
		next = temp->next;
		free(temp);
		head = next;
	}
}
