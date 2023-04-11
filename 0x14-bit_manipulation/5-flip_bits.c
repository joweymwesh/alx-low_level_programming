#include "main.h"

/**
 * flip_bits - counts number of bits needed to flip
 * @n: first number to evaluate
 * @m: second number to evaluate
 * Return: number of bit that are different from each other
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j = sizeof(unsigned long int) *8;
		unsigned int i, nflips = 0;

		for (i = 0; i < j; i++)
		{
			if ((m & 1) != (n & 1))
				nflips += 1;
			n = n >> 1;
			m = m >> 1;
		}
		return (nflips);
}
