#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: minimum num
 * @max: maximum num
 * Return: pointer to int or NULL if @min > @max or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
}
