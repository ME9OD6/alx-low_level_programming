#include "main.h"
#include <stdio.h>

/**
 * set_bit -  function that sets the value of a bit to 1 at a given index.
 * @index: starting point from 0 of bit to be set
 * @n: number
 * 
 * Return: -1 incase of error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
        int add;
        if (index > 63)
                return (-1);
        add = 1 << index;
        *n = *n | add;
        return (1);
}