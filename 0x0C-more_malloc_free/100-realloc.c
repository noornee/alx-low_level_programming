#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 * @ptr: pointer to memory previously allocated
 * @old_size: allocated space for @ptr
 * @new_size: new size in bytes of new allocated block
 * Return: ...
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);

	ptr = malloc(new_size);

	free(ptr);

	return (ptr);
}
