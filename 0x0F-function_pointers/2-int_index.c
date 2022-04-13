/**
 * int_index - searches for an integer
 * @array: array of int to be searched
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: 1 or 2 else -1 if size is <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
		return (-1);
}
