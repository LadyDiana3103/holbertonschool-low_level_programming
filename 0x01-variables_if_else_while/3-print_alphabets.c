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
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
	putchar(i);
	}
	{
	putchar(10);
	}
	return (0);
}
