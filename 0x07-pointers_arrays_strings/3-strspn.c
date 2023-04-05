#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @n: String where substring will look.
* @acc: Substring of accepted chars.
* Return: Length of occurrence.
*/

unsigned int _strspn(char *n, char *acc)
{
	unsigned int m = 0;
	char *f = acc;

	while (*n++)
	{
		while (*acc++)
			if (*(n - 1) == *(acc - 1))
			{
				m++;
				break;
			}
		if (!(*--acc))
			break;
		acc = f;
	}
	return (m);
}

