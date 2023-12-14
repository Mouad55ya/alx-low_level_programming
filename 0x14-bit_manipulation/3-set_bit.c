#include "main.h"

/**
* set_bit - sets the values of bit to 1 at a given index.
*@n: a
*@index: b
*Return: alwayse 0
*/

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);
	*n = *n | 1 << index;
		return (1);
}
