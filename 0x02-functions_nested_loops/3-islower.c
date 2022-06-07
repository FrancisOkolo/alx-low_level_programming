#include "main.h"
#include <ctype.h>

/**
 * _islower - function that returns true for lower case number
 * @c: char type letter
 *
 * Return: returns 0 on Succes and 1 on fail
 */
int _islower(int c)
{
	int i = intlower(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
