#include <stdlib.h>
/**
 * _calloc - allocates memory to an array
 * @nmemb: number of elements in array
 * @size: size of char
 * Return: a pointer to allocated memory or NULL if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);

}
