#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 1; h < 23; h++)
	{
		for (m = 1; m < 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
