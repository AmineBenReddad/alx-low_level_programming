#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 *
 * @n: checked number
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
