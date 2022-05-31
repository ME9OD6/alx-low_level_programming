#include "main.h"
#include <stdio.h>

/**
 * clear -bit - function that clear the value of a bit to set 1 at a given index.
 * @index: index
 * @n: number input
 * 
 * Return: -1 incase of an error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
        if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);         
}