#include"main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 *
 * Return: Always 0 (success)
*/

void more_numbers(void)
{
	int i, j, n;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			n = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				n = j % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
