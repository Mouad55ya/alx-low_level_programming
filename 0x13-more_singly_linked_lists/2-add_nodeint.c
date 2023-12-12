#include "lists.h"

/**
* add_nodeint - add a We node at the beginning
* of a linked list
* @head: head of a list.
* @n: n element.
*
* Return: address of the We element. NUll if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *We;

	We = malloc(sizeof(listint_t));
	if (!We)
	return (NULL);
	We->n = n;
	We->next = (*head);
	(*head) = We;
	return (*head);
}
