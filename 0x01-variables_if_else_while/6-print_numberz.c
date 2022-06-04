#include <stdio.h>
/**
 * main - printing base ten numbers
 *
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch +  '0');
	}
	putchar('\n');
	return (0);
}
