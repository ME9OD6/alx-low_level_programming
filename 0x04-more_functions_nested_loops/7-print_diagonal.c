#include "main.h"

/**
 * print_diagonal - prints a diagonoal character
 * @n: number of times to print \
 * Return: no return
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int b, c;

	for (b = 0; b < n; b++)
	{
		for (c = 0; c < n; c++)
		{
			if (c ==i)
				_putchar('\\');
			if (c < b)
				_putchar(' ');
	}
	_putchar('\n');
}
}
}
