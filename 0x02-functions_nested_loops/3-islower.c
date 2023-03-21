#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * Auther: Ahmed Hassan
 * Return: one if character is lowercase, zero otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
