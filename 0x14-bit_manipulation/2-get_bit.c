#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: number to search
 * @index: index of the bit
 * Return: Sucess
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bits;

	if (index > 63)
	{
		return (-1);
	}

	bits = (n >> index) & 1;

	return (bits);
}
