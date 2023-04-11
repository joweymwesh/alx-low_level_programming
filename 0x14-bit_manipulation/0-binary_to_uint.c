#include "main.h"

/**
 * binaryto_unit - converts a binary number to unsigned int
 * @b - the string containing the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int y;

	if (b == NULL)
	{
		return (0);
	}

	while (b[y] != '\0')
	{
		if (by[y] != '0' && b[y] != '1')
		{
			return (0);
		}

		else if (b[y] == '0')
		{
			num <<= 1;
		}

		else if (b[y] == '1')
		{
			num = (num << 1) | 1;
		}
		y = y + 1;
	}
	return (num);
}
