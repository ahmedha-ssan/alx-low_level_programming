#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: int.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = -last;

	_putchar(last + '0');

	return (last);
}


