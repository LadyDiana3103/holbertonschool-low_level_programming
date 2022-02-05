#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the string in the function
 * Description: using the main function IF
 * this program prints "Programming is like building a multilingual puzzle"
 * Return: Allways return 0
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive,\n", n);

	if (n == 0)
		printf("%d is zero,\n", n);

	if (n < 0)
		printf("%d is negative,\n", n);

	return (0);
}
