#include "main.h"
/**
 * print_square - blah
 * @size: an int
 * it is the size of the square #
 * Return: void
 */
void print_square(int size)
{
	int l, w; /* l=length w=width */

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	l = 0;

	while (l < size)
	{
		w = 0;

		while (w < size)
		{
			_putchar('#');
			w++;

		}
		l++;
			_putchar('\n');

	}

}
