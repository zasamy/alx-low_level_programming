#include"main.h"

/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: string that is encoded
*/

char *leet(char *str)
{
	char *cp = str;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*str)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*str == key[i] || *str == key[i] + 32)
			{
				*str = 48 + value[i];
			}
		}
		str++;
	}
	return (cp);
}
