#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char upper, lower;
	for (upper = 'a'; upper <= 'z'; upper++)
	{
		putchar(upper);
	}
	for (lower = 'A'; lower <= 'Z'; lower++)
	{
		putchar(lower);
	}
	putchar('\n')
	return (0);
}

