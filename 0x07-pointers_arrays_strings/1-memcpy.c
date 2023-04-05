#include "main.h"

/**
 * _memcpy - irontnoux2
 * @d: pointer to char params
 * @s: pointer to char params
 * @m: size
 * Return: *d
 */

char *_memcpy(char *d, char *s, unsigned int m)
{
	unsigned int i;

	for (i = 0; i < m; i++)
	{
		d[i] = s[i];
	}
	return (d);
}

