#include "main.h"

/**
 * _puts - prints a new line after printing a string
 * @str: input string
 *Return: Nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
