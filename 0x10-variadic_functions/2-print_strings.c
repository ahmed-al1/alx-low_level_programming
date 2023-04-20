#include "variadic_functions.h"


/**
 * print_strings - prints strings with separator
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int sam = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (sam--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
			sam ? (separator ? separator : "") : "\n");
	va_end(ap);
}
