#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list.
* @head: head of a list.
*
* Return: the address of the node where the loop starts.
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *A;
	listint_t *B;

	A = head;
	B = head;
	while (head && A && A->next)
	{
		head = head->next;
		A = A->next->next;

		if (head == A)
		{
			head = B;
			B = A;
			while (1)
			{
				A = B;
				while (A->next != head && A->next != B)
				{
					A = A->next;
				}
				if (A->next == head)
					break;

				head = head->next;
			}
			return (A->next);
		}
	}

	return (NULL);
}
