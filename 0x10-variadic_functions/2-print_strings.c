#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
