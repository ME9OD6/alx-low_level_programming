#include "main.h"

/**
 * swap_int - Program that swaps two integers
 * @a: first integer
 * @b: second integer
 * Return: Nothing being returned because of void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
