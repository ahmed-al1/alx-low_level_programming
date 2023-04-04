#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function
 * @a: 2d array of int typesruyg
 * @size: size of that will be  array (square)
 */

void print_diagsums(int *a, int size)
{
	int as, b1 = 0, b2 = 0;

	for (as = 0; as < size; as++)
	{
		b1 += a[as];
		b2 += a[size - as - 1];
		a += size;
	}
	printf("%d, ", b1);
	printf("%d\n", b2);
}
