#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	if (n == 9)
	{
	}
	else
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
