#include "lists.h"

/**
* free_listp2 - frees a linked list
* @head: head of a list.
* Return: no return.
*/
void free_listp2(listp_t **head)
{
	listp_t *A;
	listp_t *B;

	if (head != NULL)
	{
		B = *head;
		while ((A = B) != NULL)
		{
			B = B->next;
			free(A);
		}
		*head = NULL;
	}
}

/**
* free_listint_safe - frees a linked list.
* @h: head of a list.
* Return: size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
	size_t nod = 0;
	listp_t *A, *C, *D;
	listint_t *B;

	A = NULL;
	while (*h != NULL)
	{
		C = malloc(sizeof(listp_t));

		if (C == NULL)
			exit(98);

		C->p = (void *)*h;
		C->next = A;
		A = C;

		D = A;

		while (D->next != NULL)
		{
			D = D->next;
			if (*h == D->p)
			{
				*h = NULL;
				free_listp2(&A);
				return (nod);
			}
		}

		B = *h;
		*h = (*h)->next;
		free(B);
		nod++;
	}

	*h = NULL;
	free_listp2(&A);
	return (nod);
}
