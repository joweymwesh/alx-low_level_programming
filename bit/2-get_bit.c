#include "main.h"

/**
 *get_bit - value of a bit at a given index
 *@n: binary number to evaluate
 *@index: index
 *Return: the value 
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
