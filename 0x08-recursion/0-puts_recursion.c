#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @m: pointer to the string
 * Return: void
 */


void _puts_recursion(char *m)
{

	if (*m == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*m);
		_puts_recursion(m + 1);
	}

}

