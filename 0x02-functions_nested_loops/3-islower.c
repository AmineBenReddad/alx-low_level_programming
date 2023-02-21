#include "main.h"
/**
 * _islower - check if the character is lower or not
 *
 * Description: @c is the ASCII of the character
 * Return: 1 if its lower and 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
