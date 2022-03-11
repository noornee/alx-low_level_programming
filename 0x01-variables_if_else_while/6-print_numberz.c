#include <stdlib.h>

/**
 * main - the main function
 * Return: ascii 0-9
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);

	putchar('\n');
	return (0);
}
