#include"main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s : string in wish to print.
 * Return: nothing.
 */

void _puts_recursion(char *s)
{
	if (*s < 10)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion((s + 1));
}
