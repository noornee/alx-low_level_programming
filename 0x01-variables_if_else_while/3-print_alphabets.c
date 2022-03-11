#include <stdlib.h>

/**
 * main - the main function
 * Return: ascii letters a-zA-Z
 */
int main(void)
{
	int ch = 97;  /* lower case ascii letters e.g. a-z */
	int ch1 = 65; /* uppercase ascii letters e.g. A-Z */

	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}

	while (ch1 <= 90)
	{
		putchar(ch1);
		ch1++;
	}

	putchar('\n');
	return (0);
}
