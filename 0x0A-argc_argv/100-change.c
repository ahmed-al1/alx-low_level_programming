#include <stdio.h>
#include <stdlib.h>
/**
 *main-prints tfesjuifdhe minimum number of coins
 *to make change for andslfk;s amount of m.
 *@argc:number of commandline sdklfjhklarguments.
 *@argv:pointer to an array of commmandfmkjds line arguments.
 *Return:0-success, non-zero-fdsufoifail.
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int sam, cda = 0, m = atoi(argv[1]);
	int c[] = {25, 10, 5, 2, 1};

	for (sam = 0; sam < 5; sam++)
	{
		if (m >= c[sam])
		{
			cda += m / c[sam];
			m = m % c[sam];
			if (m % c[sam] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", cda);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
