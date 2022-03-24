/**
 * _strncpy - check the code
 * @dest: pointer to the destination where string is to be copied
 * @src: the string to be copied
 * @n: number of characters to be copied
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
			dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);

}
