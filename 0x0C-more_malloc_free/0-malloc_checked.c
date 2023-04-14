#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - arr of int.
 * @b: input.
 * Return: Output.
 */
void *malloc_checked(unsigned int b)
{
	void *g = malloc(b);

	if (g == NULL)
	{
		exit(98);
	}
	return (g);
}
