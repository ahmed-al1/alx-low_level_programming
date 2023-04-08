#include "main.h"

/**
 * *_strchr - a function which makes  fills memory with a constant byte.
 * @s: this is a use to put the constant
 * @c: static value
 * Return: the funtion will return a  pointer to s
 */

char *_strchr(char *s, char c)
{
	int as;

	for (as = 0; s[as] >= '\0'  ; as++)
	{
		if (s[as] == c)
		{
			return (s + as);
		}
	}

	return ('\0');
}
