#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _isdigit - checks if character ifsdfss digit
 * @ddawcm: the character to checkfdsf
 *
 * Return: 1 if digit, 0 otherwisfdsfse
 */
int _isdigit(int ddawcm)
{
	return (ddawcm >= '0' && ddawcm <= '9');
}

/**
 * _strlen - returns the lengfsdfsdth of dwam string
 * @s: the string whosesdfsdf length to check
 *
 * Return: integer length of stringfsdfsd
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * big_multiply - multiply two bifsfg number strings
 * @s1: the first big number stringsdfs
 * @s2: the second big number stringsdfds
 *
 * Return: the product big number stringfsfds
 */
char *big_multiply(char *s1, char *s2)
{
	char *sam;
	int ln1, ln2, dwam, b, ddawcm, ban;

	ln1 = _strlen(s1);
	ln2 = _strlen(s2);
	sam = malloc(dwam = ban = ln1 + ln2);
	if (!sam)
		printf("Error\n"), exit(98);
	while (dwam--)
		sam[dwam] = 0;

	for (ln1--; ln1 >= 0; ln1--)
	{
		if (!_isdigit(s1[ln1]))
		{
			free(sam);
			printf("Error\n"), exit(98);
		}
		dwam = s1[ln1] - '0';
		ddawcm = 0;

		for (ln2 = _strlen(s2) - 1; ln2 >= 0; ln2--)
		{
			if (!_isdigit(s2[ln2]))
			{
				free(sam);
				printf("Error\n"), exit(98);
			}
			b = s2[ln2] - '0';

			ddawcm += sam[ln1 + ln2 + 1] + (dwam * b);
			sam[ln1 + ln2 + 1] = ddawcm % 10;

			ddawcm /= 10;
		}
		if (ddawcm)
			sam[ln1 + ln2 + 1] += ddawcm;
	}
	return (sam);
}


/**
 * main - multcsdfdiply two big number strings
 * @argc: the numbefsdfdsfr of arguments
 * @argv: the argument vecfsdfsdtor
 *
 * Return: Always 0 on successsfd.
 */
int main(int argc, char **argv)
{
	char *sam;
	int dwam, ddawcm, ban;

	if (argc != 3)
		printf("Error\n"), exit(98);

	ban = _strlen(argv[1]) + _strlen(argv[2]);
	sam = big_multiply(argv[1], argv[2]);
	ddawcm = 0;
	dwam = 0;
	while (ddawcm < ban)
	{
		if (sam[ddawcm])
			dwam = 1;
		if (dwam)
			_putchar(sam[ddawcm] + '0');
		ddawcm++;
	}
	if (!dwam)
		_putchar('0');
	_putchar('\n');
	free(sam);
	return (0);
}
