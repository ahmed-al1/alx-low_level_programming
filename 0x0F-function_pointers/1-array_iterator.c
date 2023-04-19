#include "function_pointers.h"

/**
 * array_iterator - maps anfds array through a func pointer
 * @array: the int arraydfs
 * @size: the array sifdsze
 * @action: functiofdsn pointer
 *
 * Return: voidfdsf
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *en = array + size - 1;

	if (array && size && action)
		while (array <= en)
			action(*array++);
}
