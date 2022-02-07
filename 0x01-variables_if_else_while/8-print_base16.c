#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prviints the string in the function
 * Description: using the main function for
 * this program prints "Programming is like building a multilingual puzzle"
 * Return: Allways 0 (Success)
 */

int main(void)
{
	int i;
	char letter;

	for (i = 48; i <= 57; i++)
	putchar(i);

	for (letter = 'a' ; letter <= 'f'; letter++)
	putchar (letter);

	putchar ('\n');
	return (0);
}
