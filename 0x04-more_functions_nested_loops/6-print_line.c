#include "main.h"
/**
 * print_line - print liness
 * @n: int  the number of times _ should be printed
 * Return: void
 */
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');



}
