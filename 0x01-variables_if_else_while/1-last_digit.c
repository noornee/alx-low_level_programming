#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the main function
 * Return: some values
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit = n % 10;

	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);

	if (last_digit < 6 && last_digit != 0)
	{
		char msg[] = "and is less than 6 and not 0\n";

		printf("Last digit of %d is %d %s", n, last_digit, msg);
	}

	if (last_digit == 0)
		printf("Last digit of %d is 0 and is 0\n", n);

	return (0);
}
