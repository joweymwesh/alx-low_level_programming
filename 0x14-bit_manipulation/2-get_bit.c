#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @index - starts at 0
 * @n - binary number to evaluate
 * Return - the value, -1 if not
 */

int get_bit(unsigned long int n, unsigned int index)
{
if(index>=sizeof (unsigned long int) * 8)
{
return (-1);
}
return ((n >> index) & 1);
}
