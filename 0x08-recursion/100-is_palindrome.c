#include "main.h"

/**
 * last_index - define the last index of a string
 *
 * @s: pointer to a string
 * Return: integer
 */

int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - check if the reverse of
 * the string is the same as the string
 *
 * @s: pointer to string
 *
 * Return: 1 if a string is a palindrome and 0 if no
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));

}

/**
 * check - checker for the plindrome
 * @s: pointer to string
 * @start: check from right to left
 * @end: check from left to right
 * @mod: integer
 * Return: 0 or 1
 */

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
