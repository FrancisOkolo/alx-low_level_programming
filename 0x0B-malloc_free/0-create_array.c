#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars and initialises it with a specific
 * @size: size of array
 * char
 * @c: input value
 * Return: Null if size is 0 or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == 0)
		return (NULL);

	for (x = 0; x < size; x++)
		ptr[x] = c;

	return (ptr);
}
