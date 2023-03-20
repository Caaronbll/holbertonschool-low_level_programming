#include "main.h"

/**
 * binary_to_unit - converts from base 2 to base 10
 * @b: input binary string
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int sum = 0;

	if (!b)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		sum <<= 1;
		sum += b[i]-'0';
		i++;
	}
	return (sum);
}
