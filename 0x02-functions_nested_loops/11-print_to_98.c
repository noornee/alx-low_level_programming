#include "main.h"
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
			if (n != 98)
			{
				printf("%d, ", n);
			}
		}
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d, ", n);

		}
	}
	else
	{
		printf("%d\n", n);

	}

}
