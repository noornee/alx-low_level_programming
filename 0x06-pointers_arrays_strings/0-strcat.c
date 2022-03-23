/**
 * _strcat - concatenate two strings
 * @dest: a char pointer
 * @src: a char pointer
 * Return: char.
 * help: https://youtu.be/mQqsuDCW7MQ
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}

