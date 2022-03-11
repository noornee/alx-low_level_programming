#include <stdio.h>

/**
 * main - the main function
 * Return: ascii letters a-z
 */
int main(void)
{
	int ch = 97;

	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
