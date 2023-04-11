#include "main.h"

/**
 * *_strdup - returjdfhsjn a pointer to a newly allocated space in memory
 * which contains a copy dhjsfhsof the string given as a parameter.
 * @str: stringhfdsuyif
 * Return: Nothing
 */

char *_strdup(char *str)
{
	int b = 0, s = 0;
	char *n;

	if (st == NULL)
		return (NULL);

	for (; st[s] != '\0'; s++)
	;

	/*+1 on the size puthjkdss the end of string character*/
	n = malloc(s * sizeof(*st) + 1);

	if (n == 0)
	{
		return (NULL);
	}
	else
	{

		for (; b < s; b++)
			m[b] = st[b];
	}
	return (n);
}
