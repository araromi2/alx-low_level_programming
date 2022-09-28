#include "main.h"

/**
 * prime_help - an helper function for is_prime_number
 * @n: number to check for prime number
 * @i: number to check against
 *
 * Return: 1 if prime and 0 otherwise
 */
int prime_help(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_help(n, i + 1));
}

/**
 * is_prime_number - determine whether a number is a prime number
 * @n: number
 *
 * Return: 1 if prime and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_help(n , 2));
}

