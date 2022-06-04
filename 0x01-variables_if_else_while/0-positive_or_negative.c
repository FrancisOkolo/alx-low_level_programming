#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - program to assign a random variable, n
 *  Return: 0
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
	       printf("n is nagative\n");
	}
	else
       	{
		printf("n is zero\n");
	}
	return (0);
}
