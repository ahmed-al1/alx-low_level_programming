#include "main.h"

/**
 * _strlen - find lgdfdgength of a string
 * @s: stringfgdgfd
 * Return: intfdgd
 */


int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *argstostr - descfgdjgkfdription
 * @ac: intgfdgdf
 * @av: argumentsgfdgfd
 * Return: stringgdf
 */

char *argstostr(int ac, char **av)
{
	int b = 0, nca = 0, k = 0, cmt = 0;
	char *sa;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; b < ac; b++, nca++)
		nca += _strlen(av[b]);

	sa = malloc(sizeof(char) * nca + 1);
	if (sa == 0)
		return (NULL);

	for (b = 0; b < ac; b++)
	{
		for (k = 0; av[b][k] != '\0'; k++, cmt++)
			sa[cmt] = av[b][k];

		sa[cmt] = '\n';
		cmt++;
	}
	sa[cmt] = '\0';
	return (sa);
}
