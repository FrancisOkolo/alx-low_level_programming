#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program to assign a variable, n
 * Return: 0
 */
int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("n is positive\n");
	}
	else if (n < 0)
	{
		printf("n is negative\n");
	else
	{
		printf("n is equal to zero\n");
	}
	return (0);
}
