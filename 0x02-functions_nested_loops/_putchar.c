#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Reurn: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
