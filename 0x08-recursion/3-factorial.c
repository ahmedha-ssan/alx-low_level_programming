#include "main.h"

/**
 * factorial - factorial of n
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 if error.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
