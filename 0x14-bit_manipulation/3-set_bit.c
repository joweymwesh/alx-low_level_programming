#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to set the bit in.
 * @index: index
 *
 * Return: 1 if it worked
 */

int set_bit(unsigned long int *n, unsigned int index)
{
        if (index > sizeof(n) * 8)
                return (-1);
        *n |= (1 << index);
        return (1);
}
