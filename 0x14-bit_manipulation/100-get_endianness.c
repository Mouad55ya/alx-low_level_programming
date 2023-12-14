#include "main.h"

/**
*get_endianness - checks the endianness.
*Return: alwayse 0
*/

int get_endianness(void)
{
	char *b;

	unsigned int a;

	a = 1;
	b = (char *) &a;


	return ((int)*b);

}
