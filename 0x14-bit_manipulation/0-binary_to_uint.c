#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a str containing a binary number
* Return: the converted number, or 0 if b containers a char not 0 or 1
* or b is NULL
*/

unsigned int binary_to_uint(const char *b)
{

	int j;

	unsigned int num = 0;

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}

	if (!b)
		return (0);

	for (j = 0; b[j] != '\0'; j++)
	{
		num <<= 1;
		if (b[j] == '1')
			num += 1;
	}
	return (num);
}
