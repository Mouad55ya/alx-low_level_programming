#include "lists.h"

/**
* listint_len - returns the number of elements in
* a linked list.
* @h: head of a list.
*
* Return: numbers of nodes.
*/
size_t listint_len(const listint_t *h)
{
	int Nunm = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		Num++;
	}
	return (Num);
}
