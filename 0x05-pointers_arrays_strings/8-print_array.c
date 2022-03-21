#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array of integers
 * @a: a pointer to an array of type int
 * @n: an integer
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		if (a[i] != a[n - 1])
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[n - 1]);
	}
}
