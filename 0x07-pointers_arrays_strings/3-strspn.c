/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to work on
 * @accept: pattern to match against
 * Return: unsigned int to how many initial bytes match the pattern
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, lengh = 0, match = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				lengh++;
				break;
			}
		}
		if (lengh != 0)
			match++;
		if (match != lengh)
			return (lengh);
	}
	return (0);
}
