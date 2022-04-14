#include <unistd.h>
#include "main.h"

/**
 * _putchar - to write character c to stdout
 * @c: the character to print
 *
 * Return: 0n success (1)
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

