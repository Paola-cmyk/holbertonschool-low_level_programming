#include "main.h"
/**
 * print_square - print square with 0
 * @size: no of # square
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}

