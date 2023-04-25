#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase.
 *
 *Return: Alwzys 0 (success)
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	putchar('\n');
}
