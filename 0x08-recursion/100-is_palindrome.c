#include "main.h"

/**
 * palind2 - get length a
 * @a: string
 * @l: counter
 *
 * Return: On success 1.
 * On error, -1 if error occur.
 */
int palind2(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palind2(a + 1, l + 1));
}
/**
 * palind3 - compares
 * @a: string
 * @l: length
 *
 * Return: On success 1.
 * On error, -1 if error occur.
 */

int palind3(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind3(a + 1, l - 2));
}
/**
 * is_palindrome - checks
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 if error occur.
 */
int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}
