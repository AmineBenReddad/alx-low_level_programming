#include <stdio.h>
/**
 * main - entry point
 *
 * Desciption: print all possible combinations
 * Return: always 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		putchar(', ');
		++i;
	}
	return (0);
}
