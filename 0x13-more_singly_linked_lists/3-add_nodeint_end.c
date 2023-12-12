#include "lists.h"

/**
* add_nodeint_end - add a new  at the end
* of a linked list
* @head: head of a list.
* @n: n element.
*
* Return: address of the new element. NUll if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *New;
	listint_t *temp;

	New = malloc(sizeof(listint_t));
	if (New == NULL)
		return (NULL);
	New->n = n;
	New->next = NULL;

	if (*head == NULL)
	{
		*head = New;
		return (New);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = New;
	return (New);
}
