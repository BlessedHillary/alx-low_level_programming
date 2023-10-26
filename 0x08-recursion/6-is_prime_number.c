#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - Return x
 * @n: the number
 *
 * Return: intege
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check
 * @n: the number
 * @i: the
 *
 * Return: 1 for the
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
	return (0);

	if ((n / i) < i)
	return (1);

	return (check_prime(n, i + 1));
}