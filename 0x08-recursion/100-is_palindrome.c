#include "main.h"

/**
 * string_len - find the length of the string.
 * @s: string
 *
 * Return: The length of the string.
 */
int string_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_len(s + 1));
}


/**
 * palindrome_helper - an helper function for is_palindrome.
 * @s: string.
 * @begin: the beginning index
 * @len: the length of the string.
 *
 * Return: 1 if palindrome and 0 otherwise.
 */
int palindrome_helper(char *s, int begin, int len)
{
	if (s[begin] != s[len - 1])
		return (0);
	if (begin >= len)
		return (1);
	return (palindrome_helper(s, begin + 1, len - 1));
}

/**
 * is_palindrome - determine if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if a string is a palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome_helper(s, 0, string_len(s)));
}
