#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size);
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
  //  print_diagsums((int *)c5, 5);
    return (0);
}
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: 2d array.
 * @size: size of array.
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i;

	for (i = 0; i < (size * size); i++)
	{

	}
}
