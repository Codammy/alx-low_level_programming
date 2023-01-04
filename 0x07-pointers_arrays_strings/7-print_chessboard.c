#include "main.h"

/**
 * print_chessboard - prints a chessboard😉.
 *
 * @a: 2 - dimensional array.
 *
 * Return: no return;
 */
void print_chessboard(char (*a)[8])
{
	int row_length = sizeof(a) / sizeof(char);
	int r;
	int c;

	for (r = 0; r < row_length; r++)
	{
		for (c = 0; c < 7; c++)
		{
			_putchar(a[r][c]);
		}
		_putchar('\n');
	}
}
