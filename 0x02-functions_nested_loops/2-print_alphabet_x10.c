#include "main.h"

/**
 *print_alphabet_x10 - print alphabets
 *@void: takes no parameters
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int x;
	char ch;

	x = 0;
	while (x < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		x++;
		_putchar('\n');
	}
}

