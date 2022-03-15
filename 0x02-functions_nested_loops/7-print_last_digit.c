#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit
 * @n: int arg
 * Return: an int
 */
int print_last_digit(int n)
{
	int abs_n = abs(n);
	int last_digit = abs_n % 10;

	return (last_digit);
}
