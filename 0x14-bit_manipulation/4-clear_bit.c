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
        int add;

        if (index > 63)
                return (-1);
        add = 1 << index;
        *n = *n & (~add);
        return (1);
                
}