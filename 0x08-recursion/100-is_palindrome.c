#include "main.h"

/**
 * last_index - returns the last index of a string (counts the null char)
 * @l: pointer the string
 * Return: int
 */

int last_index(char *l)
{
	int m = 0;

	if (*l > '\0')
		m += last_index(l + 1) + 1;

	return (m);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @l: string to check
 * Return: 0 or 1
 */

int is_palindrome(char *l)
{
	int end = last_index(l);

	return (check(l, 0, end - 1, end % 2));
}

/**
 * check - checker for the palindrome
 * @l: string
 * @start: int moves from right to left
 * @end: int moves from left to right
 * @pair: int
 * Return: 0 or 1
 */


int check(char *l, int start, int end, int pair)
{

	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (l[start] != l[end])
		return (0);
	else
		return (check(l, start + 1, end - 1, pair));
}

