#include "main.h"
/**
 * print_number - prints an integer
 * @n: an integer
 * Return: void
 * help: https://stackoverflow.com/questions/22549572/
 * print-a-integer-in-c-using-putchar-only
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
