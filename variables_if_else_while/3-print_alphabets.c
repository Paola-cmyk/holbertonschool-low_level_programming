#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char low;
	char i;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
putchar('\n');
return (0);
}
