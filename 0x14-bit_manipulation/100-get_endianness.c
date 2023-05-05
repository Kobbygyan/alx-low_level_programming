#include "main.h"

/**
 * get_endianness - Determines whether machine is little-endian or big-endian.
 *
 * Return: 1 if little-endian, 0 if big-endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
