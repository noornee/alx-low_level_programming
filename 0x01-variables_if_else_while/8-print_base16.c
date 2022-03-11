#include <stdlib.h>

/**
 * main - the main function
 * Return: 0-9a-f
 */
int main(void)
{
	int num = 48;
	int ch = 97;

	while (num < 58)
	{
		putchar(num);
		num++;
	}

	while (ch < 103)
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
