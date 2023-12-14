#include "main.h"
/**
* flip_bits  -  returns the number of bits you would need to
* flip to get from one number to another.
* @n: a
* @m: a
* Return: alwayse 0
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ab;

	ab = 0;
	while (n || m)
{
	n >>= 1, m >>= 1;
	{
		if ((n & 1) != (m & 1))
			ab++;
	}
}

	return (ab);
}
