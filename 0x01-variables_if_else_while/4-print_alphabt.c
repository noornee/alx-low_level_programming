#include <stdlib.h>

/**
 * main - the main function
 * Return: ascii letters a-z excluding e and q
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if (ch == 101 || ch == 113)
			continue;
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
