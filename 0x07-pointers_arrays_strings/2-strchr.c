#include "main.h"

/**
 * _strchr - prints found c
 * @n: pointer to char
 * @c: char params to found
 * Return: *S
*/

char *_strchr(char *n, char charr)
{
	while (*n != '\0')
	{
		if (*n == charr)
		{
			return (charr);
		}
		n++;
	}
	if (*n == charr)
	{
		return (n);
	}
return (0);
}

