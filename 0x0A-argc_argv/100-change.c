#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - minimum number of coins to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if the argument is just 1 .otherwise 1.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
