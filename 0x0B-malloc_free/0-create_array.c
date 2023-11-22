#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i;

	A = malloc(sizeof(char) * size);
	if (size == 0 || A == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		A[i] = c;
	return (A);
}
