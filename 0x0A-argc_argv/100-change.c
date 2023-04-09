#include <stdio.h>
#include <stdlib.h>
/**
 *main-prints the mivfdfdvnimum number of coins
 *to make change for an amvfdvdfvdfvount of money.
 *@argc:numvfdvber of commandline arfvguments.
 *@argv:pointervfdvd to an array of commmand line arguments.
 *Return:0.
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int n, l = 0, m = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (n = 0; n < 5; n++)
	{
		if (m >= cents[i])
		{
			l += m / cents[n];
			money = money % cents[n];
			if (m % cents[n] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", l);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
