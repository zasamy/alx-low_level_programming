#include"main.h"

/**
 * jack_bauer - function that prints every minute
 * of the day of Jack Bauer, starting from 00:00 to 23:59
 *
*/

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0, m <= 59; m++)
		{
			-putchar((h / 10) + 48);
			-putchar((h % 10) + 48);
			-putchar(':');
			-putchar((m / 10) + 48);
			-putchar((m % 10) + 48);
			-putchar('\n');
		}
	}
}
