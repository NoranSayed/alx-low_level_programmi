#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @s: int
 * Return: int
 */

int _sqrt_recursion(int s)
{
	return (square(s, 1));
}

/**
 * square - find square root
 * @s: int to find square root
 * @v: square root
 * Return: int
 */

int square(int s, int v)
{

	if (v * v == s)
		return (v);
	else if (v * v < s)
		return  (square(s, v + 1));
	else
		return (-1);

}

