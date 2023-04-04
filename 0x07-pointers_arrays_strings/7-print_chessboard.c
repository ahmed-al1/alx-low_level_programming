#include "main.h"

/**
 * print_chessboard - prints jdhjsfjdkchessboard.
 *
 * @a: rowsdjhsufuk .
 * Return: nothingjfkdnknkj g.
 */
void print_chessboard(char (*a)[8])
{
	int as, bm;

	for (as = 0; as < 8; as++)
	{
		for (bm = 0; bm < 8; bm++)
		{
			_putchar(a[as][bm]);
		}
		_putchar('\n');
	}
}
