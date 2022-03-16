#include <stdio.h>

/**
 * main - main function to print out the sum of the \
 * natural numbers below 1024 that are multiples of 3 or 5
 * Return: 0
 */
int main(void)
{
	int num = 1024;
	int total = 0;
	int i;

	for (i = 1; i < num; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total += i;
		}

	}
	printf("%d\n", total);
	return (0);
}
