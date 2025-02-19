#include <stdio.h>
/**
 * main - Entry point
 * Return:Always 0
 *
 */
int main(void)
{
	char n;
	char t;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (t = 'a'; t <= 'f'; t++)
	{
		putchar(t);
	}
	putchar('\n');

return (0);
}
