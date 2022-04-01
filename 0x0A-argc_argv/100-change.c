#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money. 
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if the argument is just 1 .otherwise 1.
 */
int main(int argc, char *argv[])
{
	int i;
	int arg = atoi(argv[1]);
	int num[] = {25, 10, 5, 2, 1};

	int temp;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < 5; i++)
	{
		if (arg % num[i] == 0)
			temp = arg / num[i];
			printf("div: %d, %d\n",num[i], temp);
	}



	return (0);
}
