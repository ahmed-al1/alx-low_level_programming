#include <stdio.h>
#include <stdlib.h>

/**
 *main-print sum of 2 numbers.gregerg
 *@argc:number of commandline agregegrguments.
 *@argv:pointer to an argregergray of commmand line arguments.
 *Return:0-success,fetgr non-zero-fail.
 */

int main(int argc, char *argv[])
{
	int all;

	if (argc == 3)
	{
		all = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", all);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
