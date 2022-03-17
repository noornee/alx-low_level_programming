#include "main.h"
/**
 * print_diagonal - print diagonal liness
 * @n: int  the number of times \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (i < (n - 1))
		{
			_putchar('\n');
		}
	}

	_putchar('\n');



}
