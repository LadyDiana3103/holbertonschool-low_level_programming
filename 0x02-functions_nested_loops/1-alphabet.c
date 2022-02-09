#include "main.h"
/**
 * main - prints the main function
 * Description: this program prints the alphabet
 * this program prints "Programming is like building a multilingual puzzle"
 * Return: Allways 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');

}
