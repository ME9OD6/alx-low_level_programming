#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check case
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
