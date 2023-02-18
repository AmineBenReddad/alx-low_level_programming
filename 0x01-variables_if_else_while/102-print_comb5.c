#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all possible combinations of two two-digits
 * Return: always 0
 */

int main(void)
{
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4;

	while (n1 <= 9)
	{
		while (n2 <= 8)
		{
			while (n3 <= 9)
			{
				n4 = n1 + 1;
				while (n4 <= 9)
				{
					putchar(n1 + '0');
					putchar(n2 + '0');
					putchar(' ');
					putchar(n3 + '0');
					putchar(n4 + '0');
					if (n1 != 9 || n2 != 8 || n3 != 9 || n4 != 9)
					{
						putchar(',');
						putchar(' ');
					}
					++n4;
				}
				++n3;
			}
			++n2;
			n3 = 0;
		}
		++n1;
	}
	putchar('\n');
	return (0);
}
