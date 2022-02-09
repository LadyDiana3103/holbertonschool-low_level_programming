#include "main.h"

/**
 * Function that checks for alphabetic character.
 * Return: Allways 0 SUCCES.
 * Auth: Diana Quispe
 */
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 * Return: Allways 0 SUCCES.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

