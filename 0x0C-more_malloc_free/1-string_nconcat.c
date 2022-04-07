#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (j > n)
		n = j;

	ptr = malloc(sizeof(char) * (i + n + 1));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < n; j++)
		s1[i + j] = s2[j];

	s1[i + j] = '\0';
	return (ptr);

}
