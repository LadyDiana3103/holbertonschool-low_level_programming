/*
 * File: 1-alphabet.c
 * Auth: Diana Quispe
 */
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 * Return: allways 0 SUCCES.
 */

int print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
	return (0);
}
