#include "main.h"

/**
 * more_numbers - prints numbers from 0-14. 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		j = 0;

		while (j <= 14)
		{
			_putchar(j + '0');
			if (j >= 10)
				_putchar(j/10 + '0');
			/*	_putchar((j%10) + '0');*/
			j++;

		}

		_putchar('\n');
		i++;


	}
}
