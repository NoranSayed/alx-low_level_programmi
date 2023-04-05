#include "main.h"

/**
 * print_chessboard - prints chessboard.
 * @f: matrix
*/

void print_chessboard(char (*f)[8])
{
	int i, j;

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(*(*(j + f) + i));
		}
	_putchar('\n');
	}
}

