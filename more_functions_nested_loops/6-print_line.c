#include "main.h"
/**
 * print_line - draw a straight line in a terminal
 * @n: input character
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
