#include <stdio.h>
/**
 * main - main
 * Return: all possible different combinations of two digits.
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10;
		k = i / 10;

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');
			if (i != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}

		i++;
	}
	putchar('\n');
	return (0);
}
