#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @m: pointer the string
 * Return: int
 */

int _strlen_recursion(char *m)
{
	int s = 0;

	if (*m > '\0')
	{
		s += _strlen_recursion(m + 1) + 1;
	}

	return (s);
}

