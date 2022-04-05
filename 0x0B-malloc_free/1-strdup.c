#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * ...which contains a copy of @str.
 * @str: string to copy
 * Return: pointer to char.
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	copy = malloc(sizeof(char) * (i + 1));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
		copy[j] = str[j];

	free(copy);
	return (copy);
}
