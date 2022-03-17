#include "main.h"

/**
 * print_line - print liness
 * @n: int  the number of times _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			return;
		}
		_putchar('-');
	}

	_putchar('\n');



}
