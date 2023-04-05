#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints sums
 * @ast: a pointer
 * @si: size
 */
void print_diagsums(int *ast, int si)
{
	int j, s1 = 0, s2 = 0;

	for (j = 0; j < si; j++)
	{
		s1 += *(ast + (si * j + j));
		s2 += *(ast + (si * j + si - 1 - j));
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}

