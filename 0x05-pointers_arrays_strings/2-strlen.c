#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: Character to be input
 * Return: Always 0
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*(s + length) != '\0')
		length++;
	return (length);
}
