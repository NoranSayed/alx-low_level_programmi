#include "main.h"

/**
 * _memset - ironnou
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */

char *_memset(char *a, char b, unsigned int c)
{
	unsigned int d;

	for (d = 0; d < c; d++)
	{
		a[d] = b;
	}
	return (a);
}
