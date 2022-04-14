#include "main.h"

/**
 * _isdigit - Checks for a digit 0 to 9
 * @c: input character
 * Return: 1 if c is a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
