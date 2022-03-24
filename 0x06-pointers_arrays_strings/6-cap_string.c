/**
 * cap_string - capitalize a string
 * @str: string to ne capitalized
 * Return: char.
 * help: https://www.includehelp.com/c-programs/
 * capitalize-first-character-of-each-word-in-string.aspx
 */
char *cap_string(char *str)
{
	int i, s;


	char sep[] = {' ', '\t', '\n', '(', ')', '{', '}', ',',
		'.', '!', '?', '"', ';'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] = str[i] - 32;

		}

		for (s = 0; sep[s] != '\0'; s++)
		{
			if (str[i] == sep[s])
			{
				++i;
				if ((str[i] >= 'a') && (str[i] <= 'z'))
					str[i] = str[i] - 32;
					break;
			}

		}

	}

	return (str);
}
