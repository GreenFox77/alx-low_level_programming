#include "main.h"

/**
 * strlen_recursion - returnsthe lenght of a string.
 * @s: string.
 * return: the lenght of the string.
 */

int _strlen_recursion(char *s)
{
	if (s == '\0')
		return (0);
	else 
		return (1 + _strlen_recursion(s + 1));

}
