#include "main.h"
/**
 * print_diagonal - print diagonal liness
 * @n: int  the number of times \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			return;
		}
		_putchar('\\');
	}

	_putchar('\n');



}
