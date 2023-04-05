#include "main.h"

/**
 * factorial - finds factorial
 * @f: int
 * Return: int
 */

int factorial(int f)
{

	if (f < 0)
	{
		return (-1);
	}
	else if (f == 0)
	{
		return (1);
	}

	return (f * factorial(f - 1));

}

