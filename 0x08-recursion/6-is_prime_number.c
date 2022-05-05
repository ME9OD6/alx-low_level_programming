#include "main.h"

/**
 * mel - Mkaes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 */

int mel(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (mel(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number integer
 *
 * Return: On success 1.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (mel(n, 2));
}
