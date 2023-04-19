#include "function_pointers.h"

/**
 * int_index - searches forfgd integer
 * @array: the int arrayfdg
 * @size: the array sizefgd
 * @cmp: the compare fufdgnction
 *
 * Return: the integgfder index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int sam = 0;

	if (array && size && cmp)
		while (sam < size)
		{
			if (cmp(array[sam]))
				return (sam);
			sam++;
		}
	return (-1);
}
