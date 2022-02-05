#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the string in the function
 * Description: using the main function for
 * this program prints "Programming is like building a multilingual puzzle"
 * Return: Allways 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
		{
		}
		else
		{
		putchar(i);
		}
	}
		putchar(10);

		return (0);
}
