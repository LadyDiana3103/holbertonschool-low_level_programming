#include "main.h"

/**
 * File: 4-isalpha.c
 * Auth: Diana Quispe
 */
/**
 * _isalpha: Function that checks for alphabetic character.
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

