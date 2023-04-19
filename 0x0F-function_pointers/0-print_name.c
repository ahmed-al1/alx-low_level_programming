#include "function_pointers.h"

/**
 * print_name - fsdprints a name
 * @name: the strindsfg name
 * @f: the printing fufdsnction pointer
 *
 * Return: voiddsf
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
