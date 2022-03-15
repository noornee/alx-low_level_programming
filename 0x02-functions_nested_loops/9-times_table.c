#include "main.h"
#include <stdio.h>

/**
 * times_table - 0-9 times table
 * Return: void
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int mul = a * b;

			printf("%d", mul);
			_putchar(',');
			_putchar(' ');

		}
		_putchar('\n');

	}

}
