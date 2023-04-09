#include <stdio.h>
#include <stdlib.h>

/**
 * main - it all starts herefdgfd
 * @argc: the number of afdgdfgrguments
 * @argv: array of fdgfdgpointers to arguments
 *
 * Return:  0.
 */
int main(int argc, char *argv[])
{
	int all = 0;
	char *b;

	while (--argc)
	{
		for (b = argv[argc]; *b; b++)
			if (*b < '0' || *b > '9')
				return (printf("Error\n"), 1);
		all += atoi(argv[argc]);
	}
	printf("%d\n", all);
	return (0);
}
