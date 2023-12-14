#include "main.h"
/**
 *print_binary - prints the binary representation of a number.
 *@n: b
*/

void print_binary(unsigned long int n)
{
	int a, b;
	int num = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (a = 63; a >= 0; a--)
	{
		b = n >> a;
		if (b & 1)
		{
			num = 1;
			_putchar('1');
		}
		else if (num == 1)
			_putchar('0');
	}
}
