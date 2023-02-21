#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, res, n1, n2;

	i = 0;
	while (i < 10)
	{
		_putchar(0 + '0');
		j = 1;
		while (j < 10)
		{
			res = i * j;
			n1 = res / 10;
			n2 = res % 10;
			_putchar(',');
			_putchar(' ');
			if (n1 != 0)
				_putchar(n1 + '0');
			else
				_putchar(' ');
			_putchar(n2 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
