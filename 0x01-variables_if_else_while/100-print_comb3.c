#include <stdio.h>

/**
 * main - mainn
 * Return: something
 */
int main(void)
{
	int i;
	int n;

	i = n = 48;

	while (i < 58 && n < 58)
	{
		putchar(i);
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}

	return (0);

}
