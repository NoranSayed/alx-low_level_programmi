#include "main.h"

/**
 * wildcmp - Compare strings
 * @w1: pointer to string params
 * @w2: pointer to string params
 * Return: 0
 */

int wildcmp(char *w1, char *w2)
{
	if (*w1 == '\0')
	{
		if (*w2 != '\0' && *w2 == '*')
		{
			return (wildcmp(w1, w2 + 1));
		}
		return (*w2 == '\0');
	}

	if (*w2 == '*')
	{
		return (wildcmp(w1 + 1, w2) || wildcmp(w1, w2 + 1));
	}
	else if (*w1 == *w2)
	{
		return (wildcmp(w1 + 1, w2 + 1));
	}
	return (0);
}
