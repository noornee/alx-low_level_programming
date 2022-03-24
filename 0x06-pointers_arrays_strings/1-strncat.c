/**
 * _strncat - check the code
 * @dest: destination of the string to be appended
 * @src: string from which n characters are gotten from
 * @n: int number of characters to be appended
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{

	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);

}
