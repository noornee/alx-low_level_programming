#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - prints the sum of the arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if the arguments are integers.otherwise 1.
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}

			add += atoi(argv[i]);
		}
	}

	printf("%d\n", add);
	return (0);
}
