#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - locates first occurence of any bytes from accept in s
 *
 * @s: string to work on
 * @accept: pattern to match against
 * Return: pointer to the first match
 */
char *_strpbrk(char *s, char *accept)
{
char *vodka = accept;
while (*s)
{
	vodka = accept;
	while (*vodka != '\0')
	{
	if (*vodka == *s)
	{
	return (s);
	}
	vodka++;
	}
	s++;
	}
return (NULL);
}
