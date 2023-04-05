#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - bytes
 * @n: pointer to char
 * @acc: pointer to char
 * Return: NULL
 */

char *_strpbrk(char *n, char *acc)
{
	int j;

	while (*n)
	{
		for (j = 0; acc[j]; j++)
		{
			if (*n == acc[j])
			{
				return (n);
			}
		}
		n++;
	}
	return (NULL);
}

