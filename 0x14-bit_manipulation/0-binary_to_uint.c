#include "main.h"

/**
 * binaryto_unit - converts a binary number to unsigned int
 * @b - the string containing the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b);
{
	unsigned int n = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)

	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		n = 2 * n + (b[i] - '0');
	}
	return (n);
}
