#include <stdlib.h>

/**
 * main - the main function
 * Return: 0-9 separated by whitespaces and comma
 * e.g. 0, 1, 2...
 */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
