/**
 * leet - encide string to 1337
 * @str: string to be encoded
 * Return: char. encoded string.
 */
char *leet(char *str)
{
	int i, l, n;

	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {'4', '3', '0', '7', '1'};


	for (i = 0; str[i] != '\0'; i++)
	{
		for (l = 0, n = 0; letters[l] != '\0' && num[n] != '\0'; l++, n++)
			if ((str[i] == letters[l]) || (str[i] == letters[l] - 32))
			{

				letters[l] = num[n];
				str[i] = letters[l];

			}

	}
	return (str);
}
