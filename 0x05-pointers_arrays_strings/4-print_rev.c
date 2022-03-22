#include "main.h"
#include <string.h>
/**
 * print_rev - prints the reverse of a string
 * @s: a pointer to char
 * Return: void.
 */
void print_rev(char *s);
int main(void)
{
    char *str;

    str = "holberton!";
    print_rev(str);
    return (0);
}

void print_rev(char *s)
{
	int i, len;

	len = strlen(s) - 1;

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
