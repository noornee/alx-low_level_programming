#include <stdio.h>

/**
 * main - prints out the sum of the even fibonacci sequence
 * whose values do not exceed 4,000,000
 * Return: 0
 */
int main(void)
{
	int n1, n2, total;

	n1 = 1;
	n2 = 2;
	total = 0;

	while (n1 <= 4000000)
	{
		int nth = n1 + n2;

		n1 = n2;
		n2 = nth;

		if (n1 % 2 == 0)
		{
			total += n1;
		}
	}

	printf("%d\n", total);

	return (0);
}
