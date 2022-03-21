/**
 * swap_int - swaps the value of @a to @b and vice versa
 * @a: a pointer to an integer
 * @b: a pointer to an integer
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;

	*a = *b;
	*b = n;
}
