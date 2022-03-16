#include <stdio.h>

/**
 * main - prints out the first 98 fibonacci numbers starting from 1 and 2
 * whose values do not exceed 4,000,000
 * Return: 0
 */
int main(void)
{
	unsigned long int n1, n2, nth, count;

	n1 = 1;
	n2 = 1;
	count = 0;

	while (count < 90)
	{
		nth = n1 + n2;
		n1 = n2;
		n2 = nth;
		count += 1;
		if (count != 90)
			printf("%lu, ", n1);
		else
			printf("%lu\n", n1);

	}

	return (0);
}
