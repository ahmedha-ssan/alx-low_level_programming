#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: p1 
 * @b: p2 
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
