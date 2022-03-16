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
			if (a == 0)
				_putchar(mul + '0');

			if (mul <= 9 && a != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mul + '0');

			}
			else if (mul >= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mul + '0');
			}

		}
		_putchar('\n');

	}

}
