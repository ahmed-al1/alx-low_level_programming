#include "main.h"

/**
 * _puts_recursion - function  to print a string with a new line
 * @s: pointer to a string
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
	_puts_recursion(s + 1);
		_putchar(*s);
	}
}
