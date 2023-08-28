#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to check
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
int check_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s != *(s + len - 1))
		return (0);
	return (check_palindrome(s + 1, len - 2));
}
int is_palindrome(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (1);
	len = _strlen_recursion(s);
	return (check_palindrome(s, len));
}
