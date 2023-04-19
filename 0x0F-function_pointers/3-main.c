#include "3-calc.h"

/**
 * main - check the codfdse for dsThe School students.
 * @argc: the numfdsber of ardfsgs
 * @argv: argument vfdsectdfsor
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int (*op_func)(int, int), sa, s;

	if (argc != 4)
		printf("Error\n"), exit(98);

	sa = atoi(argv[1]);
	s = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
		printf("Error\n"), exit(99);

	if (!s && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(sa, s));
	return (0);
}
