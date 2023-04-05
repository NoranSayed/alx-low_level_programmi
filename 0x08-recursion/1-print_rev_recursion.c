#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @m: pointer to the string
 * Return: void
 */

void _print_rev_recursion(char *m)
{
	if (*m > '\0')
	{
		_print_rev_recursion(m + 1);
		_putchar(*m);
	}

}

