#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int i, int strlen);
int is_palindrome(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, find_strlen(s)));
}

/**
 * find_strlen - returns the length of a string
 * @s: string to be evaluated
 *
 * Return: length of the string
 */
int find_strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + find_strlen(s + 1));
}

/**
 * check_palindrome - checks the characters recursively for palindrome
 * @s: string to be check
 * @i: index
 * @strlen: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int i, int strlen)
{
	if (*(s + i) != *(s + strlen - 1))

		return (0);

	else if (i >= strlen)

		return (1);
	return (check_palindrome(s, i + 1, strlen - 1));

}

