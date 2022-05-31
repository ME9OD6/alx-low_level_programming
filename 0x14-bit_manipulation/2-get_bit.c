#include "main.h"
#include <stdio.h>

/**
 * get_bit - get the value of a bit at a given index
 * @n: number being evaluated
 * @index: index from 0 to next bit
 * Return: value of bit at index, -1 incase of error
 */
int get_bit(unsigned long int n, unsigned int index)
{
        int bit;

        bit = (n >> index);
        if (index > 32)
        return (-1);
        return (bit & 1);
}
