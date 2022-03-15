#include "main"
#include <stdio.h>

/**
 * print_to_98 - prints to 98
 * @n: int arg
 * Return: returns an integer from n to 98
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98; n--)
			{
				_putchar(',');
				_putchar(' ');

			}
		}
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');

			}
		}
	}
	else
	{
		printf("%d", n);

	}
	_putchar('\n');

}
