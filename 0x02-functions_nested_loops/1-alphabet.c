#include "main.h"

/**
 * print_alphabet - a function to plrint alphabets,
 * in order and lowercase followed by a new line
 *
 * Return: zero (Success)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
