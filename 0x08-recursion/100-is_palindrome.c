#include "main.h"
#include <stdio.h>

/**
 * last_index - calculate index of last character in a string recursively
 * @s: The input string
 *
 * Return: The index of the last character
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
 * is_palindrome - Checks if a string is a palindrome recursively
 * @s: The input string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - Helper function to check if a string is a palindrome recursively
 * @s: The input string
 * @start: The starting index
 * @end: The ending index
 * @mod: The modulus value
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])

		return (0);
	return (check(s, start + 1, end - 1, mod));
}
