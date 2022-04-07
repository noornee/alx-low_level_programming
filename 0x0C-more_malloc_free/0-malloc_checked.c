#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memeory using malloc.
 * @b: size
 * Return: pointer to allocated memory. or exist status of 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	char *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);

}
