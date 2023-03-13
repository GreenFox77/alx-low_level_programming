#include <stdlib.h>
#include "main.h"

/**
 * create_aray - creates an array and chars and initializes it with a char
 * @size: size of the array
 * @c: a given char
 * Return: pointer to an array / NULL (failuer)
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;
	
	if (!size)
		return (NULL);
	
	arr = malloc(sizeof(char)* size);
	if (!arr)
		return (NULL);

	i = 0;
	while (i < size)
		arr[i++] = c;
	
	return (arr);
}
