#include "main.h"

/**
 * _memset - ironnou
 * @m: pointer to char params
 * @n: data to change
 * @num: index
 * Return: *m
 */

char *_memset(char *m, char n, unsigned int num)
{
	unsigned int i;

	for (i = 0; i < num; i++)
	{
		m[i] = n;
	}
	return (m);
}

