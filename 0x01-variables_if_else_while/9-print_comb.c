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

	for (i = 48; i <= 57; i++)
	{
	putchar(i);
	if (i == 57)
	continue;
	putchar(44);
	putchar(32);
	}
	putchar(10);
	return (0);
}
