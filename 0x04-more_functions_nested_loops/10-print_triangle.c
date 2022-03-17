#include "main.h"
/**
 * print_triangle - 
 * @size: an int
 * it is the size of the triangle #
 * Return: void
 */

void print_triangle(int size)
{
	int b, h; /* b=base h=height */

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	b= 0;

	while (b< size)
	{
		h = 0;

		while (size > h)
		{
			_putchar('#');
			size--;

		}
		b++;
			_putchar('\n');

	}

}
