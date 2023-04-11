#include "main.h"

/**
 * get_endianness - This function checks the endianness of the system
 * Returns: 1 if the system is little-endian, 0 if the system is big-endian
 */

int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;

	if (*endian)
		return (1);
	return (0);
}
