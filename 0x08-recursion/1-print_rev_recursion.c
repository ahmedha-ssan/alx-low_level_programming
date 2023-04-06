#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 *
 * Return: 1.
 * On error, -1 if error.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
