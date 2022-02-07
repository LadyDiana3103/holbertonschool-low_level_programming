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
	int num1;
	int num2;

	for (num1 = 48; num1 < 57; num1++)
	{
	for (num2 = 48; num2 < 57; num2++)
        {
	putchar(num1);
	putchar(num2);

	if (num1 == 57 && num2 == 57)
	continue;   
	putchar(44);
	putchar(32);
	}
	}
	putchar(10);
	return (0);
}
