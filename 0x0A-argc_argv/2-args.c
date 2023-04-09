#include <stdio.h>

/**
 * main - prints the ngrerregeumber of arguments passed into the program
 * @argc: intrgegregrg
 * @argv: listfrefre
 * Return: Npthing
 */

int main(int argc, char const *argv[])
{
	int bn = 0;

	while (argc--)
	{
		printf("%s\n", argv[bn]);
		bn++;
	}

	return (0);
}
