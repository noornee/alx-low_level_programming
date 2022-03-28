/**
 * _strstr - locates the first occurence substring.
 * @haystack: string to be scanned.
 * @needle: string to be searched within @haystack
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != *needle && *haystack != '\0')
	{
		haystack++;
	}
	if (*haystack == *needle)
		return (haystack);
	return ('\0');

}
