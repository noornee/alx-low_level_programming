#include <stdio.h>

/**
 * main - prints out the first 50 fibonacci numbers starting from 1 and 2
 * whose values do not exceed 4,000,000
 * Return: 0
 */
int main(void)
{
	long int n1, n2, nth, count;

	n1 = 1;
	n2 = 1;
	count = 0;

	while (count < 50)
	{
		nth = n1 + n2;
		n1 = n2;
		n2 = nth;
		count += 1;
		if (n1 != 20365011074)
			printf("%ld, ", n1);
		else
			printf("%ld\n", n1);

	}

	return (0);
}
