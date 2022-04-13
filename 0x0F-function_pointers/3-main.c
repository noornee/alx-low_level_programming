#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
/** main: main func
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int);

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));
	return (0);
}

