#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - Prints all natural numbers
 *@n: the number to start printing from
 *Return: Always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n > 98)
			printf("%d. ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
	}
}
