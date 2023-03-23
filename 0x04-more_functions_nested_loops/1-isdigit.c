#include "main.h"

/**
 * _isdigit - input
 *
 * Description: define if a character is a number
 * @c: char
 * Return: 1 if ok 0 if no
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
