#include "main.h"

/**
 * _strlen_recursion - returns
 * @s: string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compsre each
 * @s: string
 * @n1: smallest
 * @n2: biggest iter
 * Return: nothing
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
	if (n1 == n2 || n1 == n2 + 1)
		return (1);
	return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a
 * @s: string.
 * Return: 1 if is a pal
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
