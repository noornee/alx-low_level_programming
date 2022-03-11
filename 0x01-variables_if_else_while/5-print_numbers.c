#include <stdio.h>

/**
 * main - the main function
 * Return: 0-9
 */
int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
