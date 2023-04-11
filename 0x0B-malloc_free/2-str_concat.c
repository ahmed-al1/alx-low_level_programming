#include "main.h"

/**
 * _strlen - find lfsihfength of a string
 * @s: stringjsdflsd
 * Return: intjfsidljf
 */


int _strlen(char *s)
{
	int si = 0;

	for (; s[si] != '\0'; si++)
	;
	return (si);
}

/**
 * *str_concat - cofdnsjkncatenates two strings
 * @s1: string 1 sdfjk
 * @s2: string 2 fsd
 * Return: pointer rffjs
 */

char *str_concat(char *s1, char *s2)
{
	int si1, si2, b;
	char *n;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	si1 = _strlen(s1);
	si2 = _strlen(s2);
	n = malloc((si1 + si2) * sizeof(char) + 1);
	if (n == 0)
		return (0);

	for (b = 0; b <= si1 + si2; b++)
	{
		if (b < si1)
			n[b] = s1[b];
		else
			n[b] = s2[b - si1];
	}
	n[b] = '\0';
	return (n);
}
