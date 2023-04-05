#include "main.h"

/**
 * _strlen_recursion - freuiuehfi returns the length of a string
 * @s: pointer thevfdjv  string
 * Return: integer
 */

int _strlen_recursion(char *s)
{
int wn = 0;

if (*s > '\0')
{
	wn = wn + _strlen_recursion(s + 1) + 1;
}

return (wn);
}
